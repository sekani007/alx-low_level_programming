#include "main.h"
/**
 * factorial - A function that returns the factorial of a number
 * @n: input
 *
 * Return: Always 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
