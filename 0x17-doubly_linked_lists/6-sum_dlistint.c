#include "lists.h"

/**
* sum_dlistint - Function that returns the sum of
* all the data (n) of a dlistint_t linked list.
* @head: pointer to head
* Return: the sum of all the data (n) of a dlistint_t linked
* list or if the list is empty, return 0.
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *list;

list = head;

	if (list == NULL)
		return (0);

	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}
return (sum);
}
