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
	newnode->next = (*head);
	newnode->prev = NULL;

	if ((*head) != NULL)
	(*head)->prev = newnode;

	(*head) = newnode;

return (newnode);
}

/*
* declare pointer newnode
* malloc size for newnode
* check if malloc was successful
* set n of newnode to be the n that is passed into function
* set next pointer in newnode to point to head making newnode 1st in list
* set prev in newnode pointer to be NULL
* if head exists, make prev pointer of head point to newnode
* ressetting head to the newnode
* return the address of newnode
*/
