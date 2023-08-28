#include "lists.h"
/**
 * add_nodeint - add new node infront of current head
 * @head: pointer to current head
 * @n: new data
 * Return: new node pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*address of new node, size should match current head's size*/
	listint_t *rookie_node = malloc(sizeof(listint_t));

	if (!rookie_node)
		return (NULL); /*fail!!*/

	rookie_node->n = n; /*data = n*/
	rookie_node->next = *head; /*Goes infront of current head*/
	*head = rookie_node; /*new node is now head*/

	/*Address of new element*/
	return (rookie_node);
}

