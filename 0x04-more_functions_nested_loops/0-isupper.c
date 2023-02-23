#include "main.h"

/**
 *_isupper - checks if char is uppercase
 *
 *Return: returns 1 if uppercase 0 if lower
 *
 *@c: the char to be checked
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
