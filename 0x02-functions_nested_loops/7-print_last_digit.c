#include "main.h"
/**
 * print_last_digit - A program to print last digits
 * @n: The integer for the digits
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int print_last_digit = n % 10;

	_putchar(print_last_digit + '0');
	_putchar('\n');
	return (0);
}
