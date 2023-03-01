#include "main.h"

/**
 * reverse_array - reverses array
 *
 * Return: void
 *
 * @a: the array to reverse
 *
 * @n: the size of the array (the number of elements)
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int tempValue = a[i];

		a[i] = a[n - 1];
		a[n - 1] = tempValue;
		n--;
	}
}
