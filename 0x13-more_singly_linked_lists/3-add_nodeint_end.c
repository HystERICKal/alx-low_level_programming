#include "lists.h"
/**
 * add_nodeint_end - add new node after current tail node
 * @head: points to current head
 * @n: new data to be insserted
 * Return: address of new added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*Initialise new nodes address*/
	listint_t *rookie_node = malloc(sizeof(listint_t));
	listint_t *store_here = *head; /*just some temporary storage*/

	if (!rookie_node)
		return (NULL); /*failed!!*/

	rookie_node->n = n;       /*Store new data in newly created address*/
	rookie_node->next = NULL; /*make sure it's next is pointing to nothing*/

	if (*head == NULL)
	{
		*head = rookie_node;
		return (rookie_node); /*If there's no list, return*/
	}

	/*Navigate to the last node*/
	for (; store_here->next; store_here = store_here->next)
		continue;

	/*Point the last node's next to the new node that will be the new last node*/
	store_here->next = rookie_node;

	return (rookie_node); /*return address of new last node*/
}
