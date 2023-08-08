#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy string and return ptr to new memory location
 * @str: The string
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *new_mem_space;
	int x = 0;
	int y = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		continue;

	new_mem_space = malloc(sizeof(char) * (x + 1));

	if (new_mem_space == NULL)
		return (NULL);

	y = 0;
	while (str[y])
	{
		new_mem_space[y] = str[y];
		y++;
	}
	return (new_mem_space);
}
