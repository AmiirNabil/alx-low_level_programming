#include "main.h"

/**
 * puts_half - prints the other half of a string
 *
 * Return: void
 *
 * @str: the string to print
 */

void puts_half(char *str)
{
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)

		{
			_putchar(str[i]);
		}
	}
	else
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
