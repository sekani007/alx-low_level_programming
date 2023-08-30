#include "main.h"
/**
 * _strlen_recursion - A function that returns length of string
 * @s: input
 *
 * Return: Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		1 + _strlen_recursion(s + 1);
	}
}
