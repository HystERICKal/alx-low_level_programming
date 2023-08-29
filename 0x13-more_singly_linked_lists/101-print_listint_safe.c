#include "lists.h"
#include <stdio.h>
/**
 * check_for_loops - Checks for loops
 * @head: points to node 1 in the list
 * Return: no loop = 0, or non similar nodes
 */
size_t check_for_loops(const listint_t *head)
{
	const listint_t *go_slow; /*moves to next node*/
	const listint_t *go_faster;/*moves two nodes ahead*/
	size_t count = 1; /*count the nodes*/

	if (head == NULL || head->next == NULL)
		return (0); /*No list detected!!!*/

	go_slow = head->next; /*start at head's next*/

	for (go_faster = (head->next)->next; go_faster; go_faster = (go_faster->next)->next)
	{
		if (go_slow == go_faster) /*possible loop detected*/
		{
			for (go_slow = head; go_slow != go_faster; go_slow = go_slow->next)
			{
				count++; /*number of nodes in loop*/
				go_faster = go_faster->next; /*go to next*/
			}

			for (go_slow = go_slow->next; go_slow != go_faster; go_slow = go_slow->next)
			{
				count++; /*number of nodes in loop*/
			}

			return (count); /*return number of nodes in loop*/
		}
		go_slow = go_slow->next; /*go to next*/
	}

	return (0); /*no loops found*/
}


/**
 * print_listint_safe - this one can print a list with a loop
 * @head: pointer to node 1
 * Return: how many nodes exist
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	size_t x;

	count = check_for_loops(head); /*call function above*/

	if (count == 0) /*no loops detected*/
	{
		while (head != NULL) /*as long as there's nodes*/
		{
			printf("[%p] %d\n", (void *)head, head->n); /*print node address and value*/
			head = head->next; /*go next*/
			count++; /*increment count*/
		}
	}
	else
	{
		x = 0;
		while (x < count) /*working with the loop*/
		{
			printf("[%p] %d\n", (void *)head, head->n);/*print node address and value*/
			head = head->next; /*go next*/
			x++; /*increment count*/
		}

		/*The loop starts here*/
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
