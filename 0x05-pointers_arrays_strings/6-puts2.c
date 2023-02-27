#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * Return: void
 *
 * @str: the string to print every other character of
 */

void puts2(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	for (i = 0; i <= len - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
