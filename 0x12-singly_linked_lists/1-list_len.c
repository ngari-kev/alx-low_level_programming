#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	int counter = 0;


	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
