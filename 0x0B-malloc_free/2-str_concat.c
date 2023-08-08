#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the result
 */
char *str_concat(char *s1, char *s2)
{
	char *join_s1_s2;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		continue;

	for (y = 0; s2[y] != '\0'; y++)
		continue;

	join_s1_s2 = malloc(sizeof(char) * (x + y + 1));

	if (join_s1_s2 == NULL)
		return (NULL);

	x = 0;
	for (; s1[x] != '\0'; x++)
	{
		join_s1_s2[x] = s1[x];
	}

	for (y = 0; s2[y] != '\0'; y++)
	{
		join_s1_s2[x] = s2[y];
		x++;
	}
	join_s1_s2[x] = '\0';
	return (join_s1_s2);
}

