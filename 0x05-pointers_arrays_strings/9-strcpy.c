#include "main.h"


/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: points to buffer
 * @src: points to string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int i;


	while (*(src + m) != '\0')
	{
		m++;
	}

	i = 0;
	while (i < m)
	{
		dest[i] = src[i];
		i++;
	}
	dest[m] = '\0';
	return (dest);
}
