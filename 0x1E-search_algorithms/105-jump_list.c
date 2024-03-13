#include "search_algos.h"

/**
 * jump_list - implementing jump search
 * @list: the list
 * @size: how big the list is
 * @value: searching for this right here
 * Return: the value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t the_next, st_len;
	listint_t *vert, *go_to;

	if (list == NULL || size == 0)
		return (NULL);

	the_next = 0;
	st_len = sqrt(size);
	vert = go_to = list;

	while (go_to->index + 1 < size && go_to->n < value)
	{
		vert = go_to;
		for (the_next += st_len; go_to->index < the_next; go_to = go_to->next)
		{
			if (go_to->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", go_to->index, go_to->n);
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
