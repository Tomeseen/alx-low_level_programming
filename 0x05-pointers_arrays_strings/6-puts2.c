#include "main.h"

/**
 * puts2- print skip one number
 * @str: string to be checked
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
