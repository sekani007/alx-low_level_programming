#include <stdio.h>
/**
 * main - A program that prints the alphabets except q and e in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char current_char;

	for (current_char = 'a'; current_char <= 'z'; current_char++)
	{
		if (current_char != 'q' && current_char != 'e')
		{
			putchar(current_char);
		}
	}
	putchar('\n');
	return (0);
}
