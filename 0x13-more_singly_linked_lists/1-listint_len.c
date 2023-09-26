#include "lists.h"
/**
  *listint_len - prints the data held in every node
  *@h: pointer to head node
  *Return: count of nodes or 0 if h is null
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

