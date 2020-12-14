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

	newnode = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	lastnode = (*head);

	newnode->next = NULL;
	newnode->n = n;

	if ((*head) == NULL)
	{
	newnode->prev = NULL;
	(*head) = newnode;
		return ((newnode));
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;
	newnode->prev = lastnode;

return (newnode);
}

/*
* Lines 13-2: Declare pointer to lastnode set it equal to head(it's a copy of
* the list).
* Lines 13-21: Declare pointer to newnode, malloc for it and check if malloc
* worked.
* Line 23: set next pointer of newnode to point to NULL
* Line 24: copy n that is passed into function into node
* Line 26: If there is no list yet set prev pointer of newnode to point to NULL
* set head to be newnode.
* Line 30: return newnode
* Line 33: while is to get the position of lastnode to one before end of list.
* Line 36: At the end of the list so you set the lastnode to be the newnode.
* Line 37: Set prev pointer of newnode to point to lastnode.
* Return address of newnode.
*/
