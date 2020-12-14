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

/*
* declare copy of the list called list, initialize sum to be 0
* if the list is empty return 0
* while the list exists:
* 1. add n from each node to the sum
* 2. set the copy/list to the next position to move through the list
* return sum
*/
