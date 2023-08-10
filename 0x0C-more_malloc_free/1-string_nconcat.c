#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: no. of bytes
 * Return: point to new space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_mem_space;
	unsigned int x, y = 0, first_temp, second_temp;

	for (first_temp = 0; s1 && s1[first_temp]; first_temp++)
		continue;
	for (second_temp = 0; s2 && s2[second_temp]; second_temp++)
		continue;

	if (n < second_temp)
		new_mem_space = malloc(sizeof(char) * (first_temp + n + 1));
	else
		new_mem_space = malloc(sizeof(char) * (first_temp + second_temp + 1));

	if (!new_mem_space)
		return (NULL);

	for (x = 0; x < first_temp; x++)
	{
		new_mem_space[x] = s1[x];
	}

	for (; n < second_temp && x < (first_temp + n); )
		new_mem_space[x++] = s2[y++];

	for (; n >= second_temp && x < (first_temp + second_temp); )
		new_mem_space[x++] = s2[y++];

	new_mem_space[x] = '\0';
	return (new_mem_space);
}

