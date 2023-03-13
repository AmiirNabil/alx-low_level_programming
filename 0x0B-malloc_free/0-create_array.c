#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 *
 * Return: pointer to first char
 * @size: size of array
 * @c: char to initialize in array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = NULL;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		p = (char *)malloc(size * sizeof(char));
		if (p != NULL)
		{

			for (i = 0; i < size; i++)
			{
				p[i] = c;
			}
		}
	}
	return (p);
}
