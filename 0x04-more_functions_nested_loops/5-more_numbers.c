#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int ch;

	for (a = 0; a < 15; a++)
	{
		for (ch = 0; ch < 10; ch++)
		{
			if (ch >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
