#include "lists.h"

/**
* pop_listint - Function that deletes the head node of a
* listint_t linked list, and returns the head node’s data (n).
* @head: double pointer, pointing to a list
* Return: the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
int data = 0;
listint_t *prev;

	if (*head == NULL)
		return (0);

	prev = *head;

	data = prev->n;

	*head = prev->next;
	free(prev);

return (data);
}
