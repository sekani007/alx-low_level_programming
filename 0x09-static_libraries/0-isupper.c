#include "main.h"
/**
 * _isupper - A program that checks for uppercase
 * @c: Character to be checked
 * Return: 1 for Success, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
