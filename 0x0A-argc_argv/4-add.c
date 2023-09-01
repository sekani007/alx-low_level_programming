#include "main.h"
#include <ctype.h>
#include <stdbool.h>
/**
 * main - A function that adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j, num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *num_str = argv[i];
			bool valid = true;

			for (j = 0; num_str[j] != '\0'; j++)
			{
				if (!isdigit(num_str[j]))
				{
					valid = false;
					break;
				}
			}
			if (!valid)
			{
				printf("Error\n");
				return (1);
			}

			num = atoi(num_str);
			sum += num;
		}
		printf("%d", sum);
	}
	return (0);
}
