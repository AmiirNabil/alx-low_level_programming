#include "main.h"

/**
 *_strlen_recursion - returns length of string
 *
 * Return: int length of string
 *
 * @s: string to check
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
