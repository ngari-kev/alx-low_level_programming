#include "lists.h"
/**
  *print_listint - prints the data held in every node
  *@h: pointer to head node
  *Return: count of nodes or 0 if h is null
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
