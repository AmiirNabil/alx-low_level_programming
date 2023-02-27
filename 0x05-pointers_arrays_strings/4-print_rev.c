#include "main.h"
#include "2-strlen.c"
/**
 * print_rev - prints string in reverse
 *
 * Return: void
 *
 * @s: the string to reverse and print
 */

void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
