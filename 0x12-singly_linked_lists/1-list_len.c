#include <stdlib.h>
#include "lists.h"
/**
 * list_len - how many elements are in the linked list?
 * @h: the infamous list
 * Return: elements in the list are returned
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	for (; h; l++)/*Loop through list*/
	{
		h = h->next;/*Next element in the list*/
	}
	return (l);
}
