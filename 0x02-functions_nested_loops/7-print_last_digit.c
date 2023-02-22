#include "main.h"

/**
* print_last_digit - prints last digit of a number
*
* Description: prints last digit of a number
*
* @x: the number to get the last digit from
*
* Return: returns the value of the last digit
*
*/

int print_last_digit(int x)
{
int i;
if (x < 0)
x = -x;
i = x % 10;
if (i < 0)
i = -i;
_putchar(i + '0');
return (i);
}
