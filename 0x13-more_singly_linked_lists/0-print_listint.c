#include "lists.h"
/**
 * print_listint - all elements of a lists are printed with this
 * @h: pointer to the list
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		node_count++;
	}

	return (node_count);
}

