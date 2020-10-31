#include "lists.h"

/**
* print_list- Prints all the elements of a list_t list
* @h: pointer (list of type list_t)
*
* Return: the number of nodes in the list (type size_t)
*/

size_t print_list(const list_t *h)
{
size_t tmp = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%u] %s\n", h->len, h->str);
tmp++;
h = h->next;
}
return (tmp);
}
