#include "lists.h"

/**
* dlistint_len - Function that returns the number of
* elements in a linked dlistint_t list.
* @h: pointer to head of list
* Return: count or number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
/*
* For loop itterates through list until h == NULL
* set position to next node
* continue loop until NULL
* return number of nodes
*/
