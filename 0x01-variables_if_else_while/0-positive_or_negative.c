#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 * main : Entry Point
 * Description: Function to check if number is positive, negative or zero
 * Return Value: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	  printf("%d is negative\n", n);
	}
		else if (n > 0)
	{
	  printf("%d is positive\n", n);
	}
		else
	{
	  printf("%d is zero\n", n);
	}
	return (0);
}
