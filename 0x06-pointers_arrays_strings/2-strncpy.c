#include "main.h"

/**
 * _strncpy - function that copies string
 *
 * Return: Array of char (string)
 *
 * @dest: the destination
 *
 * @src: the source to be copied
 *
 * @n: the number of bytes to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
