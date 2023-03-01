#include "main.h"

/**
 * strcmp - compares two strings
 *
 * Return: int ( the difference between ascii codes of first char of string)
 *
 * @s1: first string to compare
 *
 * @s2: second string to compare
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
			result = 0;
	}
	return (result);
}
