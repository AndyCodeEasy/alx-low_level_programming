#include "lists.h"

/**
 * find_listint_loop - finds the loop in linked list.
 * @head: head of a list.
 * Return: the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr2;
	listint_t *prev;

	ptr2 = head;
	prev = head;
	while (head && ptr2 && ptr2->next)
	{
		head = head->next;
		ptr2 = ptr2->next->next;

		if (head == ptr2)
		{
			head = prev;
			prev =  ptr2;
			while (1)
			{
				ptr2 = prev;
				while (ptr2->next != head && ptr2->next != prev)
				{
					ptr2 = ptr2->next;
				}
				if (ptr2->next == head)
					break;

				head = head->next;
			}
			return (ptr2->next);
		}
	}
	return (NULL);
}
