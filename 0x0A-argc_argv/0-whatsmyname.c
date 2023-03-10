#include <stdio.h>
/**
 *main - program starting point
 *Description: program prints its name without recompiling
 *@argc: args count
 *@argv: array of arguments
 *Return: int 0 means success
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
