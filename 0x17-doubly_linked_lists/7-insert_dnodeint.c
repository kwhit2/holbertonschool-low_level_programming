#include "lists.h"

/**
* insert_dnodeint_at_index - Function that inserts a
* new node at a given position.
* @h: double pointer to beginning of list
* @idx: int index
* @n: n value (integer)
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cpy, *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	cpy = *h;

	for (i = 0; cpy != NULL && i < idx; i++)
		cpy = cpy->next;

	if (cpy == NULL && i == idx)
		return (add_dnodeint_end(h, n));

	else if (cpy != NULL)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		cpy->prev->next = new;
		new->prev = cpy->prev;
		cpy->prev = new;
		new->next = cpy;

	return (new);
	}
return (NULL);
}

/*
* declare a copy of list (cpy = *h), and 'new' which will be the new node
* (if the list is empty or there is no list, return NULL)
* if idx = 0, use function we made to add node at beginning of list
* for loop: while the list (cpy) exists, AND i is less than idx,
* move copy along to the next position in the list
*
* Now, at the position one before idx, if cpy == NULL and i == idx,
* use function we made to add node at end of list, using h and n passed to us
* Else if cpy at the position before idx is NOT NULL,
* 1. malloc space for the size of the new node
* 2. check if malloc worked
* 3. set the data of new to contain n, next, and prev from cpy
* 4. set pointer 'next' of new to point to cpy (new->next = cpy);
* 5. return address of new node
* Otherwise, return NULL because it failed
*/

