#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	char lowercase;
	int i;

	i = 0;

	while (i < 10)
	{
		lowercase = 'a';
		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}
		_putchar('\n');
		i++;
	}
}
