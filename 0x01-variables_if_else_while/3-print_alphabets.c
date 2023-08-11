#include <stdio.h>
/**
 * main - A program that prints alphabets in lower and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char current_char;

	for (current_char = 'a'; current_char <= 'z'; current_char++)
	{
		putchar(current_char);
	}
	for (current_char = 'A'; current_char <= 'Z'; current_char++)
	{
		putchar(current_char);
	}
	putchar('\n');
	return (0);
}
