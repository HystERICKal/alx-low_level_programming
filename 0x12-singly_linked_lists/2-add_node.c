#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - This one adds node before header node
 * @head: Header node
 * @str: add this node
 * Return: new node returned
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	unsigned int sze;

	for (sze = 0; str[sze]; sze++)
		continue;

	if (!temp)/*FAIL!*/
		return (NULL);

	temp->str = strdup(str);
	temp->len = sze;
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
