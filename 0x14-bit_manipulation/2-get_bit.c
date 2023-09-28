#include "main.h"
#include <stdio.h>
/**
 * get_bit - A function that returns the value of a git
 * @index: The index of the git
 * @n: The number to search
 *
 * Return: The value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
