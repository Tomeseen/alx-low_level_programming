#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
