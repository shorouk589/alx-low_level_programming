#include <stdlib.h>
#include "lists.h"

/**
 * lists_len - returns the number of elemnte in a linked list
 * @h: pointer to the list_t list
 *
 * Returns: num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
