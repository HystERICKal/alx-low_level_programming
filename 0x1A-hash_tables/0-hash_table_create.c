#include "hash_tables.h"

/**
 * hash_table_create - hash table function
 * @size: array size
 * Return: Pointer or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *new_hash_table;


	new_hash_table = malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash_table->array == NULL)
		return (NULL);

	while (x < size)
	{
		new_hash_table->array[x] = NULL;
		x++;
	}
	return (new_hash_table);
}
