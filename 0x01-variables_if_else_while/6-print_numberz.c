#include <stdio.h>
/**
 * main - A program that prints number without using the char variable
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar('0' + digit);
	}
	putchar('\n');
	return (0);
}
