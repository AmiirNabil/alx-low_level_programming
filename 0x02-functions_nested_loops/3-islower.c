#include "main.h"

/**
* _islower - checks lowercase character
*
* Description: checks lowercase character
*
* Return: 1 if lowercase 0 otherwise
*
* @c: characters from a to z in ascii
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
