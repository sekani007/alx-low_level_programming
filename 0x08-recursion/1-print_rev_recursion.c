#include "main.h"
/**
 * _print_rev_recursion - A function that prints string in reverse
 * @s: input
 *
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
