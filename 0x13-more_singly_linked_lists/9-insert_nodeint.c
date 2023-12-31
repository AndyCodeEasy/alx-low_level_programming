#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new_node at given position.
 * @head: head of a list.
 * @idx: index of the list where the new_node is added.
 * @n: integer element.
 * Return: the address of the new_node node, or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *ptr;

	ptr = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
		{
			ptr = ptr->next;
		}
	}
	if (ptr == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
