#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 15; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
