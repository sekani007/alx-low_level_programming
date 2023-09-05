#include "main.h"
/**
 * create_array - A function that creates an array
 * @size: the size of the memory to print
 * @c: the character to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
