#include "lists.h"

/**
* print_dlistint - Prints all the elements of a dlistint_t list.
* @h: pointer to head of list
* Return: count or number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
/*
* For loop itterates through list until h == NULL
* print n of each node
* set position to next node
* conitnue loop until NULL
* return number of nodes
*/
