#include "lists.h"
/**
 * get_dnodeint_at_index - nth node
 * @head: head pointer
 * @index: node index
 * Return: nth node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s = 0;
	dlistint_t *this_node = head;

	for (; this_node != NULL; this_node = this_node->next)
	{
		if (s == index)
			return (this_node);
		s++;
	}
	return (NULL);
}
