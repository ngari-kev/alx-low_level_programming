#include "lists.h"
/**
*free_list - frees memory hed by a list
*@head: a pointer to a pointer to the head of a list
*/

void free_list(list_t *head)
{
	list_t *temp, *next_node;

	if (head->next != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			next_node = temp->next;
			free(temp->str);
			free(temp);

			temp = next_node;
		}
	}
}
