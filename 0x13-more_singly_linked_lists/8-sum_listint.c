#include "lists.h"
/**
 * sum_listint - adds everything up in a list
 * @head: points to first thing in the list
 * Return: total of every list item added up
 */
int sum_listint(listint_t *head)
{
	int totl = 0; /*Store sum result here*/

	/*Moving pointer that Starts at head*/
	listint_t *store_here;

	/*Traverse through every list item and add the data up*/
	for (store_here = head; store_here; store_here = store_here->next)
	{
		totl = totl + store_here->n; /*Add every list item data*/
	}

	return (totl); /*return result*/
}
