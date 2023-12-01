#include "hash_tables.h"

/**
 * shash_table_create - thsi hash table is sorted now
 * @size: hash table size
 * Return: pointer or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	shash_table_t *new_hash_table;


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
	new_hash_table->shead = NULL;
	new_hash_table->stail = NULL;
	return (new_hash_table);
}

/**
 * shash_table_get - get something from the sorted hash table
 * @ht: hash table pointer
 * @key: key to find
 * Return: element value or null
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int temp;
	shash_node_t *bundle;


	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	temp = key_index((const unsigned char *)key, ht->size);
	if (temp >= ht->size)
		return (NULL);


	for (bundle = ht->shead; bundle != NULL && strcmp(bundle->key, key) != 0;
			bundle = bundle->snext)
		continue;


	return ((bundle == NULL) ? NULL : bundle->value);
}

/**
 * shash_table_print - the hash table printer
 * @ht: hash table pointer
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *bundle;

	if (ht == NULL)
		return;

	printf("{");
	for (bundle = ht->shead; bundle != NULL;)
	{
		printf("'%s': '%s'", bundle->key, bundle->value);
		bundle = bundle->snext;
		if (bundle != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - hash table in reverse
 * @ht: hash table pointer
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bundle;

	if (ht == NULL)
		return;

	printf("{");
	for (bundle = ht->stail; bundle != NULL;)
	{
		printf("'%s': '%s'", bundle->key, bundle->value);
		bundle = bundle->sprev;
		if (bundle != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - hash table delete
 * @ht: hash table pointer
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *bread_winner = ht;
	shash_node_t *bundle;
	shash_node_t *holder;

	if (ht == NULL)
		return;

	for (bundle = ht->shead; bundle; bundle = holder)
	{
		holder = bundle->snext;
		free(bundle->key);
		free(bundle->value);
		free(bundle);
	}

	free(bread_winner->array);
	free(bread_winner);
}
