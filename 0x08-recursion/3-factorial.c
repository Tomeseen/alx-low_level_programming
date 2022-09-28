#include "main.h"

/**
 * factorial - entry point
 * Description - returns the factorial of a given number
 * @n: given number
 * Return: the factorial of n,
 * if n is lower than 0 return -1
 */

int factorial(int n)
{
	int i;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1)

	i = factorial(n - 1);
	return (n * i);
}
