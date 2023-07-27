#include "main.h"
/**
 * string_toupper - lowercase to uppercase function
 * @letters: pointer
 *
 * Return: uppercase string
 */
char *string_toupper(char *letters)
{
	int x;

	for (x = 0; letters[x] != '\0'; x++)
	{
		if (letters[x] >= 'a' && letters[x] <= 'z')
			letters[x] = letters[x] - 32;
	}
	return (letters);
}
