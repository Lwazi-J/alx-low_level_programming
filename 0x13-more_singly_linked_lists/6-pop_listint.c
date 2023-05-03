#include <stdlib.h>

typedef struct listint_s 
{
  int n;
  struct listint_s *next;
} listint_t;

/**
 * pop_listint - Deletes the head node of a `listint_t` linked list.
 * @head: A pointer to a pointer to the head node of the list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
  int data;
  listint_t *temp;

  if (*head == NULL)
    return (0);

  data = (*head)->n;
  temp = *head;
  *head = (*head)->next;
  free(temp);

  return (data);
}

