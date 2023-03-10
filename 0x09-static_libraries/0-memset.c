#include "main.h"

/**
 * _memset - fills up memory with constant byte
 *
 * Return: char
 *
 * @s: memory area to be pointed at
 *
 * @b: constant byte
 *
 * @n: number of bytes to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *x = (unsigned char *) s;

	while (n-- > 0x00)
	{
		*x++ = b;
	}
	return (s);
}
