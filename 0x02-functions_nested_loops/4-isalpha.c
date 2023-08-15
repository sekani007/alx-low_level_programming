#include "main.h"
/**
 * _isalpha - A program that checks for alphabets
 * @c: This is the character to be checked
 * Return: 1 if c is an alphabet, or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
