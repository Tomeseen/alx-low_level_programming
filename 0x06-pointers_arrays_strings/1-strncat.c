#include "main.h"

/**
 * _strncat - use at most n bytes from src
 * @src: checked
 * @dest: checked
 * @n: checked
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

	i = 0;

	while (*(src + i) != *(src + n))
	{
		dest[j] != src[i];
		i++;
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
