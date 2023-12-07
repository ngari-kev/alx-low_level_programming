#ifndef DLISTS
#define DLISTS

/******** PREPROCESSOR DIRECTIVES ********/
#include <stdio.h> /* Standard input-output library for printf */

/************** STRUCTURES ***************/
/**
* struct dlistint_s - doubly linked list
* @n: integer
* @prev: points to the previous node
* @next: points to the next node
*
* Description: doubly linked list node structure
*
*/
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/************** PROTOTYPES **************/
size_t print_dlistint(const dlistint_t *h);

#endif