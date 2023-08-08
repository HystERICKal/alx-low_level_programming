#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of the program
 * @ac: ac
 * @av: av
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int x = 0, y, p = 0, t = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		y = 0;
		for (; av[x][y]; y++)
		{
			t++;
		}
		x++;
	}
	t = t + ac;
	str = malloc(sizeof(char) * t + 1);
	if (str == NULL)
		return (NULL);
	while (x < ac)
	{
		y = 0;
		for (; av[x][y]; y++)
		{
			str[p] = av[x][y];
			p++;
		}
		if (str[p] == '\0')
		{
			str[p++] = '\n';
		}
		x++;
	}
	return (str);
}
