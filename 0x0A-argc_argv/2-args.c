#include <stdio.h>
/**
 *main - main entry point
 *Description: program that prints all arguments it receives
 *Return: int 0 success
 *@argc: arguments count
 *@argv: vector of all arguments
 */

int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
