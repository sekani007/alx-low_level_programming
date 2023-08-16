#include "main.h"

/**
* positive_or_negative - A program that determines if a number is +, - or 0
* @i: The integer to be checked
* Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
