#include "main.h"

/**
* print_alphabet_x10 - prints alphabets 10x
*
* Description: prints alphabets 10 times
*
* Return : always 0
*/

void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
