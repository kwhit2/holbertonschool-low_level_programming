#include "hash_tables.h"

/**
* hash_table_create - Function that creates a hash table
* @size: size of the array
* Return: a pointer to the newly created hash table or if something went
* wrong then the function will return NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create = NULL;

	if (size == 0)
		return (NULL);

	create = malloc(sizeof(hash_table_t));
	if (create == NULL)
		return (NULL);

	create->size = size;
	create->array = malloc(sizeof(hash_node_t *) * size);
	if (create->array == NULL)
		return (NULL);

	return (create);
}
