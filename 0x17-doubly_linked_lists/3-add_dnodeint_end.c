#include "lists.h"
/**
 * add_dnodeint_end - creates a new tail
 * @head: head p0interx2
 * @n: node content
 * Return: new node or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = malloc(sizeof(dlistint_t));
	dlistint_t *last_last = malloc(sizeof(dlistint_t));

	if (last_last == NULL)
		return (NULL);

	last_last->n = n;
	last_last->prev = NULL;
	last_last->next = NULL;

	if (*head == NULL)
		*head = last_last;
	else
	{
		last = *head;
		for (; last->next != NULL; last = last->next)
			continue;
		last_last->prev = last;
		last->next = last_last;
	}
	return (last_last);
}
