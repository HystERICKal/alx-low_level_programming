#include "lists.h"
/**
 * free_listint - This one sets the list free
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	/*Stores the next node as we delete the current one*/
	listint_t *store_here;

	/*Navigate through the list as we delete till the end*/
	for (; head; head = store_here)/*Next node becomes head*/
	{
		store_here = head->next; /*Store the next node*/
		free(head); /*Delete the current one*/
	}
}

