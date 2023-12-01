#include "hash_tables.h"

/**
 * key_index - you'll get the key index from this
 * @key: this is that key
 * @size: hash table array size
 * Return: an index
 * Description: you'll get the key index from this using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int the_key_index;

	the_key_index = hash_djb2(key) % size;
	return (the_key_index);
}
