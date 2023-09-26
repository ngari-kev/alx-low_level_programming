#include "lists.h"
/**
  *pop_listint - deletes the head node of a list
  *@head: pointer to a pointer pointing to head
  *Return: 0 if failure and n(data in head node) if success
  */
int pop_listint(listint_t **head)
{
	int b;
	listint_t *h;

	if (*head == NULL)
		return (0);

	h = *head;
	b = h->n;
	*head = (*head)->next;
	free(h);
	return (b);
}
