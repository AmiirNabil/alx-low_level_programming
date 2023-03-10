#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * Return: int length of string s
 *
 * @s: the string to be checked
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}
