#include "lists.h"
/**
 * delete_nodeint_at_index - removes node at an index in a list
 * @head: points to the head
 * @index: remove node at this index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x; /*counter*/
	listint_t *i_am_here; /*node at present*/
	listint_t *store_here = *head; /*just stores nodes momentarily*/

	if (*head == NULL)
		return (-1); /*No list == failure*/

	if (index == 0) /*Deletes head node*/
	{
		*head = (*head)->next; /*Next node becomes head*/
		free(store_here); /*Delete what was previously head*/
		return (1); /*success!*/
	}

	for (x = 0; x < index - 1; x++) /*Now looking for the index to delete*/
	{
		if (!store_here || !(store_here->next)) /*if end of list is reached...*/
			return (-1); /*failure!!*/
		store_here = store_here->next; /*Keep going...*/
	}
	i_am_here = NULL; /*set new node to null first*/

	i_am_here = store_here->next; /*then store current node's next*/
	store_here->next = i_am_here->next;
	free(i_am_here); /*delete*/

	return (1); /*success*/
}
