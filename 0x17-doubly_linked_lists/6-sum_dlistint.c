#include "lists.h"
/**
*sum_dlistint - sums up the elements in a linked list
*@head: pointer to statr of a list
*Return: sum of elements or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
