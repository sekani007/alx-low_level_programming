#include "main.h"
/**
 * _islower - A program that checks for lowercase
 * @c: is the char that is being checked
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
