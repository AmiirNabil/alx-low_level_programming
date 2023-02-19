#include <stdio.h>

/**
* main - main entry point of program
*
* Description: a program that prints alphabets except q e"
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
{
ch++;
continue;
}
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
