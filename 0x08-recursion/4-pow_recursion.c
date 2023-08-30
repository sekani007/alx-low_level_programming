#include "main.h"
/**
 * _pow_recursion - A function that returns the value of x^y
 * @x: input
 * @y: input
 *
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
