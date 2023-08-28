#include "lists.h"
/**
 * free_listint2 - sets free some list
 * @head: points to the head of the list
 */
void free_listint2(listint_t **head)
{
	/*Store next node as we delete current*/
	listint_t *store_here;

	if (head == NULL)
		return; /*No list detected!*/

	for (; *head; *head = store_here)
	{
		store_here = (*head)->next; /*stores next node*/
		free(*head);/*delete current one*/
	}

	*head = NULL; /*set head to null*/
}
