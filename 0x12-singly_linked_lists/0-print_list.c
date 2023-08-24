#include <stdio.h>
#include "lists.h"
/**
 * print_list - This one prints the list
 * @h: The infamous list
 * Return: how many nodes they are
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;

	for (; h; l++)
	{
		if (!h->str) /*String is null*/
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	/*Number of nodes*/
	return (l);
}
