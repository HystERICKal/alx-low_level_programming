#include "lists.h"
/**
 * reverse_listint - This one reverses the list
 * @head: points to node 1
 * Return: points to the new node 1 which was the previous last node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *after = NULL; /*point to node after current node*/
	listint_t *before = NULL; /*point to node before current node*/

	for (; *head; *head = after)
	{
		after = (*head)->next; /*point to node after current head*/
		(*head)->next = before; /*what's after head points to what was before*/
		before = *head; /*The last node that was taken to the back*/
	}

	*head = before; /*the new head*/

	return (*head); /*The new head == previously was the tail*/
}

