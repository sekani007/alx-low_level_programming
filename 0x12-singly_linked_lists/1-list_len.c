#include <stdio.h>
#include "lists.h"
/**
 * list_len - A function that returns the number of elements
 * @h: The pointer to the function lists_len
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
