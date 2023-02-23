#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Return: void
 *
 * @n: the number of columns
 */

void print_line(int n)
{
  int i;
  for (i = 0; i <= n; i++)
    {
      _putchar('_');
    }
  _putchar('\n');
}
