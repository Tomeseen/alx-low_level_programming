#include "main.h"

/**
 * _print_rev_recursion - entry point
 * Description - prints a string in reverse
 * @s: string to be printed in reverse
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
