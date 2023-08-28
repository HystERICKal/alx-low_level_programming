#include "lists.h"
/**
 * listint_len - no. of elements in a list are computed
 * @h: pointer to the list
 * Return: element count
 */
size_t listint_len(const listint_t *h)
{
	size_t element_count = 0;

	for (; h; h = h->next)
	{
		element_count++;
	}

	return (element_count);
}
