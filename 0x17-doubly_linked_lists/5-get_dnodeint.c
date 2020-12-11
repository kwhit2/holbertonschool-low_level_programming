#include "lists.h"

/**
* get_dnodeint_at_index - Function that returns the nth node
* of a dlistint_t linked list.
* @head: pointer to head
* @index: index of the node, starting at 0
* Return: nth node of a dlistint_t linked list, or NULL if the node
* does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

dlistint_t *cpy = head;
unsigned int i = 0;

while (i != index)
{
	if (cpy->next == NULL)
		return (NULL);
	i++;
	cpy = cpy->next;
}

return (cpy);
}
