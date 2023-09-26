#include "lists.h"
/**
  *add_nodeint - Add a new node at the beginning of a linked list.
  * @head: A pointer to a pointer to the head of the linked list.
  * @n: The integer value to be stored in the new node.
  * Return: A pointer to the newly added node,NULL if memory allocation fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->next = *head;
	node->n = n;
	*head = node;
	return (node);
}
