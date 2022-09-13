#include "main.h"

/**
 * main - check your code
 *
 * Description - prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet("print all lowercase letters on the next line\n");
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
