#include <stdio.h>
/**
 * main - A program that prints the number of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char current_char;

	for (current_char = '0'; current_char <= '9'; current_char++)
	{
		putchar(current_char);
	}
	for (current_char = 'a'; current_char <= 'f'; current_char++)
	{
		putchar(current_char);
	}
	putchar('\n');
	return (0);
}
