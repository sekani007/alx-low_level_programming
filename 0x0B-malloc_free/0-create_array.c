#include "main.h"
/**
 * create_array - A function that creates an array
 * @size: the size of the memory to print
 * @c: the character to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c);
{
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *array = (char *)malloc(sizeof(char) * char);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
/**
 * main - A function that initializes an array with a char
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int size = 10;
	unsigned int i;
	char character = 'A';
	char *array = create_array(size, character);

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			_putchar(array[i]);
		}
		free(array);
	}
	else
	{
		_putchar('A');
	}
	_putchar('\n');
	return (0);
}

