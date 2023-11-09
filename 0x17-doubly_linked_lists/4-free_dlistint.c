#include "lists.h"
/**
 * free_dlistint - set it free!
 * @head: head pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *bucket;

	for (; head != NULL; head = head->next)
	{
		bucket = head;
		free(bucket);
	}
}
