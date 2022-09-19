#include <stdio.h>
#include"main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: elements parameter input
 * @a: string parameter input
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	if (a)
	{

		int i = 0;

		while (i < n)
		{
			printf("%d", a[i]);
			if (i <= (n - 1))
			{
				printf(",");
				printf(" ");
			}
			i++;

		}
	}
	printf("\n");
}
