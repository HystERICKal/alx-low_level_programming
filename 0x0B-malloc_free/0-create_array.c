#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an arr of chars, init with specific char
 * @size: arr size
 * @c: char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr_of_chars;
	unsigned int x = 0;

	arr_of_chars = malloc(sizeof(char) * size);
	if (size == 0 || arr_of_chars == NULL)
		return (NULL);

	while (x < size)
	{
		arr_of_chars[x] = c;
		x++;
	}
	return (arr_of_chars);
}
