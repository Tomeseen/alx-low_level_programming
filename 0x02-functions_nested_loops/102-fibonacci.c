#include <stdio.h>

/**
 * main - entry point
 * Return: nothing
 */

int main(void)
{
	int counter = a;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%1d, %1d, ", a, b);
	while (counter < 50)
	{
		printf("%1d", c);
		counter++;
		a = b;
		b = c;
		c = a + b;
		if (counter < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
