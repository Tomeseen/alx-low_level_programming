#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer to be printed
 *
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = (n % 10) * -1;

	else
		a = n % 10;

	_putchar(a + '0');

	return (a);
}
