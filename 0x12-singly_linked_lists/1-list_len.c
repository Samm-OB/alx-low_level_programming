#include "lists.h"

/**
 * list_len - no of elements in list
 * @h: singly linked list
 * Return: no elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
