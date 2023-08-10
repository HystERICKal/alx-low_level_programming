#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem_alloctd = malloc(b);

	if (mem_alloctd == NULL)
		exit(98);
	return (mem_alloctd);
}
