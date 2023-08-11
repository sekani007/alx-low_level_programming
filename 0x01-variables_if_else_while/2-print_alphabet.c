#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char current_char = 'a';

	while (current_char <= 'z')
	{
		putchar(current_char);
		current_char++;
	}
	putchar('\n');
	return (0);
}
