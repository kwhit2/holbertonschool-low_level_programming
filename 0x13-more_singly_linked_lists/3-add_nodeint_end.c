#include "lists.h"

/**
* add_nodeint_end- adds a new node at the end of a listint_t list
* @n: int
* @head: first node
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastnode;

	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	lastnode = (*head); /* see comments below */

	newnode->next = NULL;
	newnode->n = n;

	if ((*head) == NULL)
	{
		(*head) = newnode; /*parens not needed around *head */
		return ((*head)); /*but maybe it adds to reability?*/
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;

return (lastnode);
}
