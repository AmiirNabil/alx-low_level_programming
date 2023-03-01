#include "main.h"
/**
* rot13 - rot13 encoding
*
* Return: pointer to arr
*
* @s: string to encode
*/
char *rot13(char *s)
{
	char firsthalf[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	char secondhalf[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i = 0, j;

	while (s[i] != 0)
	{
		char c = s[i];

		for (j = 0; j < 52; j++)
		{
			if (c == firsthalf[j])
			{
				s[i] = secondhalf[j];
			}
		}
		i++;
	}
	return (s);
}
