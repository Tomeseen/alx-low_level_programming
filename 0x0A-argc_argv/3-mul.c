#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers followed by a new line
 * @argc:number of arguments
 * @argv: array of pointers to argument
 * Return: return 0 if there are two arguments,
 * if there is one argument, return 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
