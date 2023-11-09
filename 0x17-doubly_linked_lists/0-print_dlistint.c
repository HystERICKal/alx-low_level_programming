#include "lists.h"
/**
 * print_dlistint - print list
 * @h: head of list
 * Return: node count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *bucket = h;
	size_t trackerr;

	for (trackerr = 0; bucket != NULL; trackerr++)
	{
		printf("%d\n", bucket->n);
		bucket = bucket->next;
	}
	return (trackerr);
}
