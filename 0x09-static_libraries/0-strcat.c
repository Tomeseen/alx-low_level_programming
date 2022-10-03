#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: source string
 * @dest: destination string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
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

	while (*(src + i) != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
