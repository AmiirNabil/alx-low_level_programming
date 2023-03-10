#include <stdio.h>
/**
 *main - main entry point
 *Description: program prints the number of arguments passed into it
 *@argc: arguments count
 *@argv: the arguments passed
 *Return: int 0 succesfull
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
