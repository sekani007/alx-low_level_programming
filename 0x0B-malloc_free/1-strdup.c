#include "main.h"
#include <string.h>
/**
 * _strdup - A function that return a pointer to a new
 * memory space
 * @str: the pointer to be returned
 *
 * Return: duplicate on success
 */
char *_strdup(char *str)
{
	char *duplicate;
	size_t length;

	if (str == NULL)
		return (NULL);

	length = strlen(str);
	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);
	strcpy(duplicate, str);
	return (duplicate);
}
