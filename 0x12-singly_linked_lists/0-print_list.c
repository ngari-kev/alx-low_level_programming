#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		counter++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}
