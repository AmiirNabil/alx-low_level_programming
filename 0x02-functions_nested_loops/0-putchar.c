#include "_putchar.c"

/**
* main - main entry point
*
* Description: a program that prints _putchar
*
* Return : 0 success
*/

int main(void)
{
char *ch = "_putchar";

while (*ch)
{
_putchar(*ch);
++*ch;
}
 return (0);
}
