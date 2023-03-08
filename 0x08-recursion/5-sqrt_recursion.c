#include "main.h"
/**
 * _sqrt_recursion - returns square root of n
 *
 * Return: integer the square root of a number
 *
 * @n: the number to get the square root of
 */
int _sqrt_recursion(int n)
{
	return (method1(1, n));
}

/**
 * method1 - try a few numbers
 * @a: integer to try
 * @b: integer to evaluate
 * Return: value of square root
 */
int method1(int a, int b)
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else
		return (method1(a += 1, b));

}
