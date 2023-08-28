#include "lists.h"
/**
 * pop_listint - delete head of a list
 * @head: pointer to the head
 * Return: data in deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *store_here;
	int count;

	/*If list is empty...*/
	if (!head || !*head)
		return (0); /*Return 0 as requested*/

	count = (*head)->n; /*data in head stored here*/
	/*store the node after the head*/
	store_here = (*head)->next;
	free(*head); /*Delete head*/
	/*Head's next node becomes new head*/
	*head = store_here;

	/*data inside the deleted head*/
	return (count);
}

