#include "lists.h"
/**
 * find_listint_loop - looks for some loop in a list
 * @head: points to node 1 in the list
 * Return: loop leader address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *go_far = head; /*This one goes a bit ahead to check*/
	listint_t *go_near = head; /*This one stays back to remember previous nodes*/

	if (!head)
		return (NULL); /*no list detected!!*/

	for (; go_far && go_near && go_near->next; ) /*is there more to the list?*/
	{
		go_near = go_near->next->next; /*Goes two nodes ahead*/
		go_far = go_far->next; /*Goes only one node ahead*/
		if (go_near == go_far) /*starts detecting a loop...*/
		{
			go_far = head; /*go to the head*/
			for (; go_far != go_near; ) /*as long as they aren't equal*/
			{
				go_far = go_far->next; /*check the next node*/
				go_near = go_near->next; /*check the next node*/
			}
			return (go_near); /*return where the loop was first detected*/
		}
	}

	return (NULL); /*No loop detected!*/
}

