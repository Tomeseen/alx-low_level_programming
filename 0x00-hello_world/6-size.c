#include <stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longintType;
	long long int longlongintType;

	printf("Size of int: 4 bytes\n", sizeof(intType));
	printf("Size of float: 4 bytes\n", sizeof(floatType));
	printf("Size of char: 1 byte\n", sizeof(charType));
	printf("Size of long int: 8 byte\n", sizeof(longintType));
	printf("Size of long long int: 8 byte\n", sizeof(longlongintType));

	return (0);
}
