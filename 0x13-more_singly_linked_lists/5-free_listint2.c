#include "lists.h"

/**
* free_listint2 - Function that frees a listint_t list.
* @head: pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp, *prev;

	prev = *head;

if (head == NULL)
return;

	while (prev != NULL)
	{
		tmp = prev->next;
		free(prev);
		prev = tmp;
	}
(*head) = prev;
}
