#include "main.h"
#include <stdlib.h>
/**
 * array_range - creats an array of integers
 * Return: pointer to first element of array
 * @min: first number to store in array
 * @max: last number to store in array
 */

int *array_range(int min, int max)
{
	int *p;
	unsigned int i, count;

	if (min > max)
		return (NULL);
	for (i = 0; min++ <= max; i++)
	{}

	p = malloc(sizeof(int) * i);
	if (p == NULL)
		return (NULL);
	for (count = 0; count < i; count++)
		p[count] = min++;

	return (p);
}
