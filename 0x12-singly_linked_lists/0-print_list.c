#include <stdio.h>
#include "lists.h"
/**
 * print_list - A function that prints all the elements
 * @h: Pointer to the lists
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		node_count++;
		h = h->next;
	}
	return (node_count);
}
