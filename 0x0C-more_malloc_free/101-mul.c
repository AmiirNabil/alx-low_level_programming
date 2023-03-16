#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry point
 * Return: int, 0 success
 * @argc: arguments count passed to program
 * @argv: arguments vector passed to program
 */

int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
