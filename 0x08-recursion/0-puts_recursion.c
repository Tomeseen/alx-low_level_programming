#include "main.h"

/**
 * _puts_recursion - entry point
 * Description - prints a string, followed by a new line.
 * @s: string to be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s);
		_putchar(s + 1);
	}
}
