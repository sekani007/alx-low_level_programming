#include "main.h"
/**
 * main - A function that prints the number of arguments passed
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
