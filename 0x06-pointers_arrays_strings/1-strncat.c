#include "main.h"

/**
 * _strncat - use at most n bytes from src
 * @src: source string
 * @dest: destination string
 * @n: integer to be declared
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}

	while (*(src + i) != *(src + n))
	{
		dest[j] != src[i];
		i++;
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
