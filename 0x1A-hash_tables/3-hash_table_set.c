#include "hash_tables.h"

/**
 * hash_table_set - element is added to the hashtable
 * @ht: The hash table
 * @key: hash table key
 * @value: corresponds to the key
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x;
	char *the_holder;
	hash_node_t *temp;
	unsigned long int chamber;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	the_holder = strdup(value);
	if (the_holder == NULL)
		return (0);

	chamber = key_index((const unsigned char *)key, ht->size);
	x = chamber;
	while (ht->array[x])
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = the_holder;
			return (1);
		}
		x++;
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(the_holder);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = the_holder;
	temp->next = ht->array[chamber];
	ht->array[chamber] = temp;
	return (1);
}
