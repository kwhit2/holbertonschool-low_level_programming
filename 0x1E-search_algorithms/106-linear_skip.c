#include "search_algos.h"

/**
* *linear_skip - function that searches for a value in a sorted...
* ...skip list of integers.
* @list: a pointer to the head of the skip list to search in
* @value: value to search for
* Return: a pointer on the first node where value is located...
* ...If value is not present in list or if head is NULL, your...
* ...function must return NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp;

	if (list == NULL)
		return (NULL);
	temp = list;
	while (temp->next)
	{
		if (temp->n < value)
			temp = temp->next;
		else if (temp->n == value)
			return (temp);
		else
			return (NULL);
	}
	if (temp->n == value)
		return (temp);
	return (NULL);
}
