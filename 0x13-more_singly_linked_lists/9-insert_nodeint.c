#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node with the given data at the
 * specified position in a `listint_t` linked list.
 * @head: A pointer to the head node of the list.
 * @idx: The index of the list where the new node should be added
 * (starting from 0).
 * @n: The data to be stored in the new node.
 *
 * Return: If the new node was successfully added, a pointer to the new node.
 * Otherwise, NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current = *head, *prev = NULL;
	listint_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i < idx)
		return (NULL);

	prev->next = new_node;
	new_node->next = current;

	return (new_node);
}

