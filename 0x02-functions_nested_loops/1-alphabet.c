#include "main.h"
/**
 * print_alphabet - A function that prints the alphabet in lowecase
 */
void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
