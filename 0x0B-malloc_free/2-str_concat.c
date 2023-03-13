#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concats two strings in memory
 * Return: pointer to concatenated string
 * @s1: first string
 * @s2: second string to concat
 */

char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	unsigned int i;
	int n, c, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n = 0; s1[n] != '\0'; n++)
	{}
	for (c = 0; s2[c] != '\0'; c++)
	{}
	p = (char *)malloc(n + c + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (; s2[d] != '\0'; i++)
	{
		p[i] = s2[d];
		d++;
	}
	return (p);
}
