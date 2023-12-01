#include "./hash_tables.h"

/**
 * hash_table_print - the hash table printer
 * @ht: hash table pointer
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char switch_this = 0;
	unsigned long int x = 0;
	hash_node_t *chamber;

	if (ht == NULL)
		return;

	printf("{");
	while (x < ht->size)
	{
		if (ht->array[x] != NULL)
		{
			if (switch_this == 1)
				printf(", ");

			for (chamber = ht->array[x]; chamber != NULL;)
			{
				printf("'%s': '%s'", chamber->key, chamber->value);
				chamber = chamber->next;
				if (chamber != NULL)
					printf(", ");
			}
			switch_this = 1;
		}
		x++;
	}
	printf("}\n");
}
