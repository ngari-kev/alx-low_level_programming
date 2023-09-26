#include "lists.h"
/**
  *free_listint - frees memory used by a list
  *@head: pointer to head node
  */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
