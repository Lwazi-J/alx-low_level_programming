#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a `listint_t` linked list.
 * @head: A pointer to the head node of the list.
 * @index: The index of the node to be returned (starting from 0).
 *
 * Return: If the node exists, a pointer to the node.
 *         Otherwise, NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (index > 0 && current != NULL)
	{
		current = current->next;
		index--;
	}

	return (current != NULL ? current : NULL);
}

