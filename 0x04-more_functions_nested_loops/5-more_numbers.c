#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 - 9
 *
 * Return: void
 */

void more_numbers(void)
{
int i, j, higher, lower;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
higher = j / 10;
lower = j % 10;
if (j >= 10)
_putchar(higher + '0');

_putchar(lower + '0');
}
_putchar('\n');
}
}
