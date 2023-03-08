#include "main.h"
/**
 *factorial - returns factorial
 *
 *Return: int factorial
 *
 *@n: number to get factorial of
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
