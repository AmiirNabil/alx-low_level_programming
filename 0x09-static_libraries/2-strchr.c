#include "main.h"
/**
 * _strchr - locates a char in string
 *
 * Return: returns a pointer to first occurrence of the char
 *
 * @c: the character to look for
 *
 * @s: the string to be checked
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
		{	return (&s[i]);
			break;
		}
	i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return ('\0');
}
