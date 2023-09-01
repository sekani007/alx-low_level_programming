#include "main.h"
/**
 * _isdigit - A program that checks for digits 0 - 9
 * @c: Character to be assessed
 * Return: 1 for success, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
