#include "hash_tables.h"

/**
 * hash_table_delete - hash table delete
 * @ht: the hash table pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *bread_winner = ht;
	unsigned long int x = 0;
	hash_node_t *chamber;
	hash_node_t *second_chamber;

	while (x < ht->size)
	{
		if (ht->array[x] != NULL)
		{
			for (chamber = ht->array[x]; chamber != NULL; chamber = second_chamber)
			{
				second_chamber = chamber->next;
				free(chamber->key);
				free(chamber->value);
				free(chamber);
			}
		}
		x++;
	}
	free(bread_winner->array);
	free(bread_winner);
}
