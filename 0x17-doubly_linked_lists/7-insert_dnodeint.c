#include "lists.h"
/**
 * insert_dnodeint_at_index - put node in nth pos
 * @h: head pointer
 * @idx: index of list
 * @n: element of node
 * Return: address or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *bucket = *h;
	dlistint_t *rookie = malloc(sizeof(dlistint_t));
	unsigned int d = 0;

	if (rookie == NULL)
		return (NULL);
	rookie->n = n;
	rookie->next = NULL;
	rookie->prev = NULL;

	if (*h == NULL)
	{
		*h = rookie;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; bucket != NULL; bucket = bucket->next)
	{
		if (d == idx && idx != 0)
		{
			rookie->next = bucket;
			rookie->prev = bucket->prev;
			bucket->prev->next = rookie;
			bucket->prev = rookie;
			return (rookie);
		}
		d++;
	}
	if (d == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}

