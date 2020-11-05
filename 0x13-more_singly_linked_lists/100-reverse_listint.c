#include "lists.h"

/**
* reverse_listint - Function that reverses a listint_t linked list.
*
* @head: double pointer to head of listint_t
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *list, *tmp;

list = 0;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = list;
		list = *head;
		*head = tmp;
	}
*head = list;
return (*head);
}
