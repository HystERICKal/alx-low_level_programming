#include "lists.h"
/**
 * dlistint_len - element number
 * @h: head of list
 * Return: element number
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *bucket = h;
	size_t trackerr;

	for (trackerr = 0; bucket != NULL; trackerr++)
	{
		bucket = bucket->next;
	}
	return (trackerr);
}
