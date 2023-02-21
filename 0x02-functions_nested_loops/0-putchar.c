#include "main.h"

/**
* main - program entry point
*
* Description: prints _putchar
*
* Return: 0 success
*/

int main(void)
{
char ch[] = "_putchar";
int c = 0;
while (c < 8)
{
_putchar(ch[c]);
c++;
}
_putchar('\n');
return (0);
}
