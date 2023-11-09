#include "lists.h"
/**
 * sum_dlistint - the sum master
 * @head: head pointer
 * Return: the sum total
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *bucket = head;
	int totl;

	for (totl = 0; bucket != NULL; bucket = bucket->next)
	{
		totl = totl + bucket->n;
	}
	return (totl);
}
