#include "lists.h"
/**
 * list_len - returns then number of list elements.
 * @h: singly linked list.
 * Return: number of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t newel;

	newel = 0;
	
	while (h != NULL)
	{
		h = h->next;
		newel++;
	}
	return (newel);
}
