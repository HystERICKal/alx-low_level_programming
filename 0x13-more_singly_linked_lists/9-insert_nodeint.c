#include "lists.h"
/**
 * insert_nodeint_at_index - puts in a new node at given index
 * @head: points to head
 * @idx: the given index
 * @n: content to insert at given index
 * Return: add to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *rookie_node = malloc(sizeof(listint_t));
	listint_t *store_here = *head;

	/*Failure!!*/
	if (!rookie_node || !head)
		return (NULL);

	rookie_node->n = n; /*assign n to newly created node*/
	rookie_node->next = NULL; /*Make sure there's no next node*/

	if (idx == 0) /*If to be inserted at the front...*/
	{
		rookie_node->next = *head; /*Current head = new node's next*/
		*head = rookie_node; /*New node is now head*/
		return (rookie_node); /*return it as requested*/
	}

	while (store_here && x < idx) /*while there's a node and ther's indexes...*/
	{
		if (x == idx - 1) /*Found where to insert...*/
		{
			rookie_node->next = store_here->next; /*link from the back...*/
			store_here->next = rookie_node; /*link from the front...*/
			return (rookie_node);
		}
		else
			store_here = store_here->next; /*Keep going till index is reached*/

		x++;
	}

	return (NULL); /*failure!*/
}

