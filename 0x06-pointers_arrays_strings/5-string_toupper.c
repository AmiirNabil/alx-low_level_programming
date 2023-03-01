#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 *
 * Return: Array of char (String)
 *
 * @s: the string to make uppercase
 */

char *string_toupper(char *s)
{
	int i;
	char *result = s;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] > 90 && s[i] < 122)
		{
			result[i] = s[i] - 32;
		}
		else
			result[i] = s[i];
	}
	return (result);
}
