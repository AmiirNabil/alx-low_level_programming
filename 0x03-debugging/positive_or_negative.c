#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - function is the main entry point
 * Description: 'get random value signature of an int'
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
  if (n > 0)
    {
      printf("%d is positive\n", n);
    }
  else if (n == 0)
    {
      printf("%d is zero\n", n);
    }
  else if (n < 0)
    {
      printf("%d is negative\n", n);
    }
  return;
}
