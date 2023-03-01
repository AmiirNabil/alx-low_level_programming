#include "main.h"

/**
 * leet - encodes string
 *
 * Return: array of char (string)
 *
 * @s: string to encode
 */
char *leet(char *s)
{
	char lower_upper[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
			     {'t', 'T'}, {'l', 'L'}};

	char values[] = {'4', '3', '0', '7', '1'};

	int i = 0, j;

	while (s[i] != 0)
	{
		char c = s[i];

		for (j = 0; j < 5; j++)
		{
			if (c == lower_uperp[j][0] || c == lower_upper[j][1])
			{
				s[i] = values[j];
				break;
			}
		}

		i++;
	}
	return (s);
}
