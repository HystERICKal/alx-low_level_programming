#include "lists.h"
/**
 * get_nodeint_at_index - return node at nth position
 * @head: pointer to the head node
 * @index: the requested nth position
 * Return: the nth node to be returned
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *store_here = head; /*Stores the head*/
	unsigned int x; /*counter*/

	/*Check If there's a node and index isn't reached*/
	for (x = 0; store_here && x < index; x++)
	{
		/*Move to next node till node at index is reached*/
		store_here = store_here->next;
	}

	if (store_here)
	{
		return (store_here); /*If node at index exists*/
	}
	else
	{
		return (NULL); /*if it doesn't*/
	}
}
