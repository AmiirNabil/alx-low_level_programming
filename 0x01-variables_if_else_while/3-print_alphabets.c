#include <stdio.h>

/**
* main - the main entry point
*
* Description: a program that prints the alphabets
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ch = 'a';
char chCap = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (chCap <= 'Z')
{
putchar(chCap);
chCap++;
}
putchar('\n');
return (0);
}
