#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to be printed in reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int i, len;

	i = 0;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
