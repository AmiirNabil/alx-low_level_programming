/**
* print_alphabet - entry point
*
* Description: prints alphabets
*
* return: 0 success
*/

void print_alphabet()
{
int _putchar(char);
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
