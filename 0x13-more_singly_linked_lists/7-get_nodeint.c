#include "lists.h"

/**
* get_nodeint_at_index- Returns the nth node of a listint_t linked list
* @head: double pointer
* @index: index of the node, starting at 0
* Return: nth node of a listint_t linked list, or NULL if the node
* does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *cpy = head;
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
