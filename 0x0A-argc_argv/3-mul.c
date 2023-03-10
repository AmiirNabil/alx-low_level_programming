#include <stdio.h>
#include <stdlib.h>
/**
 *main - main entry point
 *Return: 0 if success 1 if error
 *Description: program that multiplies 2 numbers from user
 *@argc: arguments count
 *@argv: vector of arguments
 */

int main(int argc, char **argv)
{
	int result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	}
	return (0);
}
