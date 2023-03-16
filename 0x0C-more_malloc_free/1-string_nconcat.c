#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * Return: pointer to concatenated string
 * @s1: first string
 * @s2: second string
 * @n: first number of bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, count;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{}

	for (j = 0; s2[j] != '\0'; j++)
	{}
	if (n >= j)
		n = j;

	p = malloc(i + n + 1);
	if (p == NULL)
		return (NULL);

	for (count = 0; count < (i + n); count++)
	{
		if (count < i)
			p[count] = s1[count];

		if (count >= i)
		{
			p[count] = *s2, s2++;
		}
	}

	p[count] = '\0';
	return (p);
}
