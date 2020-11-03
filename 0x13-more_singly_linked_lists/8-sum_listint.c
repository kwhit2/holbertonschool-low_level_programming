#include "lists.h"

/**
* sum_listint - Function that returns the sum of
* all the data (n) of a listint_t linked list.
* @head: pointer
* Return: the sum of all the data (n) of a listint_t linked list.
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *list;

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
