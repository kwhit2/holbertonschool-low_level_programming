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

/*
 * declare hash_table variable to create & set equal to NULL.
 * if size of the hash table is 0/does not exist return NULL.
 * malloc size for the new hash table.
 * check if malloc worked & if not return NULL.
 * set size of create(new hashtable) equal to the size passed in the prototype.
 * malloc space (size of a hash node struct) for the array of our...
 * ...create(new hash table).
 * check if malloc worked & if not return NULL.
 * return create(new hash table).
 */
