#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - A program that determines if a number is positive, negative or zero
 * return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zeero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
