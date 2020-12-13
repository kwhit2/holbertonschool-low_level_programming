#include "lists.h"

/**
* add_dnodeint_end - Function that adds a new node at the
* end of a dlistint_t list.
* @n: const int / data within nodes
* @head: first node
* Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *lastnode;

	if (head == NULL)
		return (NULL);

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	lastnode = (*head); /* see comments below */

	newnode->next = NULL;
	newnode->n = n;

	if ((*head) == NULL)
	{
	newnode->prev = NULL;
        (*head) = newnode; /*parens not needed around *head */
		return ((newnode)); /*but maybe it adds to reability?*/
	}
	lastnode = (*head);

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;
	newnode->prev = lastnode;

return (lastnode);
}
