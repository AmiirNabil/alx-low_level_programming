#include <stdio.h>
/**
* main - entry point
*
* Description: 2 digits possible combinations
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i = '0';
int d = '0';

while (i <= '9')
{
while (d <= '9')
{
if (!(i > d || i == d))
{
putchar(i);
putchar(d);
if (i == '8' && d == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
d++;
}
d = '0';
i++;
}
return (0);
}
