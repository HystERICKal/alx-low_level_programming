#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - new node after tail node
 * @head: The head
 * @str: add this
 * Return: added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_this = malloc(sizeof(list_t));
	list_t *hold = *head;
	unsigned int sze;

	for (sze = 0; str[sze]; sze++)
		continue;

	if (!add_this)
		return (NULL);

	add_this->str = strdup(str);
	add_this->len = sze;
	add_this->next = NULL;

	if (*head == NULL)
	{
		*head = add_this;
		return (add_this);
	}

	for ( ; hold->next; )
		hold = hold->next;

	hold->next = add_this;
	return (add_this);
}

