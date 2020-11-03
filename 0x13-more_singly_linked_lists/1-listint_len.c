#include "lists.h"

/**
* listint_len- Returns the number of elements in a linked listint_t list
* @h: pointer (list of type listint_t)
*
* Return: the number of elements in a linked list (type size_t)
*/

size_t listint_len(const listint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		h = h->next;
		nodecount++;
	}

return (nodecount);
}
