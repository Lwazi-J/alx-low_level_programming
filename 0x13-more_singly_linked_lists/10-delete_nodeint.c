#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a
 * `listint_t` linked list.
 * @head: A pointer to the head node of the list.
 * @index: The index of the node to be deleted
 * (starting from 0).
 *
 * Return: If the node at the specified index was successfully deleted,
 * 1. Otherwise, -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i < index || current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

