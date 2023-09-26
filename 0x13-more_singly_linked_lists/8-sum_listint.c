#include "lists.h"
/**
  *sum_listint - sums the data held in every node
  *@head: pointer to head node
  *Return: sum or 0 if h is null
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h;

	h = head;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
