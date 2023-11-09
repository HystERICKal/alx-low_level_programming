#include "lists.h"
/**
 * delete_dnodeint_at_index - delete function
 * @head: the head
 * @index: the index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *first_temp;
	dlistint_t *second_temp;
	unsigned int x;
	first_temp = *head;

	if (first_temp != NULL)
	{
		for (; first_temp->prev != NULL;
				first_temp = first_temp->prev)
			continue;
	}
	x = 0;

	for (; first_temp != NULL; first_temp = first_temp->next)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = first_temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				second_temp->next = first_temp->next;

				if (first_temp->next != NULL)
					first_temp->next->prev = second_temp;
			}
			free(first_temp);
			return (1);
		}
		second_temp = first_temp;
		x++;
	}
	return (-1);
}
