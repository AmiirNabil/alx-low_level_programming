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
	int count;
	int deff = max - min;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (deff + 1));
	if (p == NULL)
		return (NULL);
	for (count = 0; count <= deff; count++)
		p[count] = min++;

	return (p);
}
