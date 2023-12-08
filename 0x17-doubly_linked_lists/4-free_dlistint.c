#include "lists.h"
/**
*free_dlistint - frees a list
*@head: pointer to the start of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(head);
	}
	free(temp);
}
