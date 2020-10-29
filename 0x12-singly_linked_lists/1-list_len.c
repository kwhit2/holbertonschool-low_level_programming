#include "lists.h"

/**
* list_len- Returns the number of elements in a linked list_t list
* @h: pointer (list of type list_t)
*
* Return: the number of elements in a linked list (type size_t)
*/

size_t list_len(const list_t *h)
{
	size_t nodecount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodecount++;
	}

return (nodecount);
}
