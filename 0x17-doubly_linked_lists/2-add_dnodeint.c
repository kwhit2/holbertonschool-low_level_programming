#include "lists.h"

/**
* add_dnodeint- Function that adds a new node at
* the beginning of a dlistint_t list.
* @n: const int / data within nodes
* @head: first node
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
    newnode->prev = NULL;
	newnode->next = *head;

	*head = newnode;

return (newnode);
}
