#include "lists.h"
/**
* free_dlistint - Function that frees a dlistint_t list.
* @head: pointer to head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *copy = head;

	while (copy != NULL)
	{
		tmp = copy->next;
		free(copy);
		copy = tmp;
	}
}

/*
* declare pointer to tmp
* declare pointer to copy = head to make a copy of the list
* while the list exists
* 1. set tmp equal to 1 node past copy
* 2. free copy (1st time through this is head)
* 3. move copy to 1 down the list into the position tmp was holding
*/
