#include "main.h"
#include <unistd.h>
/**
 * _putchar - A program that declares the putchar function
 * @c: The character to display
 * Return: 1 on Success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
