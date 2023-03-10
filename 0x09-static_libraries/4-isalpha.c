#include "main.h"

/**
* _isalpha - checks alphabetical character
*
* Return: 1 if letter 0 otherwise
*
* @c: letter to be checked
*/

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
