#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory previsouly allocated with malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem_blck;
	char *old_mem_blck;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	new_mem_blck = malloc(new_size);
	if (!new_mem_blck)
		return (NULL);
	old_mem_blck = ptr;
	if (new_size < old_size)
	{
		while (x < new_size)
		{
			new_mem_blck[x] = old_mem_blck[x];
			x++;
		}
	}
	if (new_size > old_size)
	{
		while (x < old_size)
		{
			new_mem_blck[x] = old_mem_blck[x];
			x++;
		}
	}
	free(ptr);
	return (new_mem_blck);
}
