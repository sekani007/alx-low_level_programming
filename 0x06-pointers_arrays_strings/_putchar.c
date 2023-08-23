#include <unistd.h>
/**
 * _putchar - A general putchar function
 * @c: The char variable
 * return: write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
