#include "main.h"

/**
 * _strncat - concatenates 2 strings at most n bytes
 *
 * Return: array of char (string)
 *
 * @dest: the destination string
 *
 * @src: the second array to append
 *
 * @n: the maximum number of bytes to concatenate
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != 0 && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
