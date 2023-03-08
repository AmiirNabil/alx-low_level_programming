#include "main.h"
/**
 * _pow_recursion - returns x to the power of y
 *
 * Return: x to the power of y value
 *
 * @x: power
 *
 * @y: base
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
