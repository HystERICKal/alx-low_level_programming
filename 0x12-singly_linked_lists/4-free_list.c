#include <stdlib.h>
#include "lists.h"
/**
 * free_list - sets a list free
 * @head: pointer to the first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *hold;

	for (; head; )
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
}
