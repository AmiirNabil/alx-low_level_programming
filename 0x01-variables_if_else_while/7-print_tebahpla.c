#include <stdio.h>
/**
* main - program main entry point
*
* Description: smile the mirror
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
