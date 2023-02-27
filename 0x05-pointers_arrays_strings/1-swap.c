#include "main.h"

/**
 * swap_int - swaps values of two integers
 *
 * Return: void
 *
 * @a: first int
 *
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int tempAdress = *a;
	*a = *b;
	*b = tempAdress;
}
