#include "main.h"
/**
 * is_prime_number - checks if n is prime
 *
 * Return: 1 if prime 0 otherwise
 *
 * @n: number to check
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (prime2(2, n));
}

/**
 *prime2 - find prime number
 *@x: integer
 *@y: integer
 *Return: value
 */
int prime2(int x, int y)
{
	if (y == x)
		return (1);
	else if (y % x == 0)
		return (0);
	return (prime2(x + 1, y));
}
