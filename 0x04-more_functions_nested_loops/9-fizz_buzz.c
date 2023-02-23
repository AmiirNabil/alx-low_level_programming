#include <stdio.h>

/**
 * main - starting point
 *
 * Description: a program to print fizbuzz in special locations
 *
 * Return: Always 0 success
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 15 != 0)
{
printf("Fizz");
}
else if (i % 5 == 0 && i % 15 != 0)
{
printf("Buzz");
}
else if (i % 15 == 0)
{
printf("FizzBuzz");
}
else
printf("%d", i);

if (i < 100)
printf(" ");
else
printf("\n");
}
return (0);
}
