#include "main.h"
/**
 * print_last_digit - A program to print last digits
 * @n: The integer for the digits
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
		n = -n;
	b = n % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
