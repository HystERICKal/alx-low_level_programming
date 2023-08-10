#include <stdlib.h>
#include "main.h"
/**
 * *mem_filler - helper function
 * @m: pointr
 * @c: var c
 * @t: var t
 * Return: char
 */
char *mem_filler(char *m, char c, unsigned int t)
{
	unsigned int x = 0;

	while (x < t)
	{
		m[x] = c;
		x++;
	}
	return (m);
}
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: elements
 * @size: bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_alloctd;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_alloctd = malloc(size * nmemb);

	if (mem_alloctd == NULL)
		return (NULL);

	mem_filler(mem_alloctd, 0, nmemb * size);

	return (mem_alloctd);
}

