#include "main.h"
/**
 * _strlen - A program that returns the length of a string
 * @s: The string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
