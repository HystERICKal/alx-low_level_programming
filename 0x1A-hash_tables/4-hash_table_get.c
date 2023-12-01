#include "hash_tables.h"

/**
 * hash_table_get - get something from the hash table
 * @ht: hash table pointer
 * @key: key to find
 * Return: element value or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int temp;
	hash_node_t *bundle;


	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	temp = key_index((const unsigned char *)key, ht->size);
	if (temp >= ht->size)
		return (NULL);


	for (bundle = ht->array[temp]; bundle && strcmp(bundle->key, key) != 0;
			bundle = bundle->next)
		continue;


	return ((bundle == NULL) ? NULL : bundle->value);
}
