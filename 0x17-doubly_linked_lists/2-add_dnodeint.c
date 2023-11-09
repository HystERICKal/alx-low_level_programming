#include "lists.h"
/**
 * add_dnodeint - insert new head
 * @head: old head
 * @n: element content
 * Return: new element of null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_this;
	dlistint_t *temp;

	add_this = malloc(sizeof(dlistint_t));
	if (add_this == NULL)
		return (NULL);

	add_this->n = n;
	add_this->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		for (; temp->prev != NULL; temp = temp->prev)
			continue;
	}

	add_this->next = temp;

	if (temp != NULL)
		temp->prev = add_this;

	*head = add_this;

	return (add_this);
}
