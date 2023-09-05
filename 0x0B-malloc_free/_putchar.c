#include <unistd.h>
/**
 * _putchar - writes character to standard output
 * @c: the character to be written
 *
 * Return: on success, return c. on error returns -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
