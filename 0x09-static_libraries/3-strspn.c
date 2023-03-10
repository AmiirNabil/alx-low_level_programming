#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * Return: unsigned int (number of bytes in initial segment)
 *
 * @s: string to be checked
 *
 * @accept: number of bytes to cut
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != 0)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
			break;
			}
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}
	return (i);
}
