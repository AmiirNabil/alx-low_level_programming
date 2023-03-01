#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * Return: array of char of cocatenated strings
 *
 * @dest: the starting string
 *
 * @src: the array to be appended
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return dest;
}
