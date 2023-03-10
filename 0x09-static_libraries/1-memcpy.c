#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * Return: array of char
 *
 * @dest: address to be pointed at
 *
 * @src: the source to copy from
 *
 * @n: number of bytes to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = src;
	char *y = dest;

	while (n != 0)
	{
		*y++ = *x++;
		n--;
	}
	return (dest);
}
