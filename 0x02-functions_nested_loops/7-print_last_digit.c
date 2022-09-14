#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: integer to be printed
 *
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int n;

	if (n > 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = (n % 10);
		_putchar(r + '0');
		return (r);
	}
}
