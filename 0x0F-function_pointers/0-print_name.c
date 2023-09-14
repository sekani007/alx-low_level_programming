#include "function_pointers.h"
/**
 * print_name - A function that prints name
 * @name: String to print
 * @f: Pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
