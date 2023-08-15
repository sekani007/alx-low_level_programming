#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to stdout
 * @c: The character to print out
 *
 * Return: Always 1 (Success)
 * on error, -1 is returned, and the error is appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
