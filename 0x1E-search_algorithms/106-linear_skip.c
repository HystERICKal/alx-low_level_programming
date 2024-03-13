#include "search_algos.h"

/**
 * linear_skip - implementing linear skio
 * @list: the list wit pointer to first elem
 * @value: Searching for this
 * Return: the value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *vert, *go_to;

	if (list == NULL)
		return (NULL);

	vert = go_to = list;

	while (go_to->next != NULL && go_to->n < value)
	{
		vert = go_to;

		if (go_to->express != NULL)
		{
			go_to = go_to->express;

			printf("Value checked at index [%ld] = [%d]\n",
					go_to->index, go_to->n);
		}
		else
		{
			while (go_to->next != NULL)
				go_to = go_to->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			vert->index, go_to->index);

	while (vert->index < go_to->index && vert->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", vert->index, vert->n);
		vert = vert->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", vert->index, vert->n);

	return (vert->n == value ? vert : NULL);
}
