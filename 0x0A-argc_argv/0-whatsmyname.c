#include "main.h"
#include <stdio.h>
/**
 * main - A function that prints its name
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
