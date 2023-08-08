#include <stdlib.h>
#include "main.h"
/**
 * **strtow - splits string into sent
 * @str: string
 * Return: char
 */
char **strtow(char *str)
{
	char **the_arr, *carr;
	int x, v, y, sent, q, alph, omeg;

	v = 0;
	q = 0;

	for (y = 0; *(str + y); y++)
		continue;
	sent = word_counter(str);
	if (sent == 0)
		return (NULL);
	the_arr = (char **) malloc(sizeof(char *) * (sent + 1));
	if (the_arr == NULL)
		return (NULL);
	x = 0;
	while (x <= y)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (q)
			{
				omeg = x;
				carr = (char *) malloc(sizeof(char) * (q + 1));
				if (carr == NULL)
					return (NULL);

				for (; alph < omeg; )
					*carr++ = str[alph++];
				*carr = '\0';
				the_arr[v] = carr - q;
				v++;
				q = 0;
			}
		}
		else if (q++ == 0)
			alph = x;
		x++;
	}
	the_arr[v] = NULL;
	return (the_arr);
}

/**
 * word_counter - helper function
 * @wrd: string
 *
 * Return: word count
 */
int word_counter(char *wrd)
{
	int temp, q = 0, count;

	temp = 0;
	count = 0;

	while (wrd[q] != '\0')
	{
		if (wrd[q] == ' ')
			temp = 0;
		else if (temp == 0)
		{
			temp = 1;
			count++;
		}
		q++;
	}
	return (count);
}
