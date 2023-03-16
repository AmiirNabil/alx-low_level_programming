#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - checks malloc execution, if fails exits with 98 status
 * Return: pointer to the allocated memory
 * @b: number of bytes to store
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
