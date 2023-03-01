#include "main.h"

/**
 * cap_string - capitalizes all words of string
 *
 * Return: Array of char (String)
 *
 * @s: the string to convert
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if ((s[i] == ' '
		    || s[i] == '\t'
		    || s[i] == '\n'
		    || s[i] == ','
		    || s[i] == ';'
		    || s[i] == '.'
		    || s[i] == '!'
		    || s[i] == '?'
		    || s[i] == '"'
		    || s[i] == '('
		    || s[i] == ')'
		    || s[i] == '{'
		    || s[i] == '}') && s[i + 1] != 0)
			if (s[i + 1] > 96 && s[i + 1] < 123)
			{
				s[i + 1] = s[i + 1] - 32;
			}

	}
	return (s);
}
