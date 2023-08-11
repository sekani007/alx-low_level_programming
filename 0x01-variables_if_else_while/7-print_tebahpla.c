#include <stdio.h>
/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char current_char;

	for (current_char = 'z'; current_char >= 'a'; current_char--)
	{
		putchar(current_char);
	}
	putchar('\n');
	return (0);
}
