#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d-array of ints
 * @width: arr width
 * @height: arr height
 * Return: pointer to a 2d-array of ints
 */
int **alloc_grid(int width, int height)
{
	int **two_d_int_arr;
	int c = 0;
	int a;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_d_int_arr = malloc(sizeof(int *) * height);

	if (two_d_int_arr == NULL)
		return (NULL);

	while (c < height)
	{
		two_d_int_arr[c] = malloc(sizeof(int) * width);

		if (two_d_int_arr[c] == NULL)
		{
			while (c >= 0)
			{
				free(two_d_int_arr[c]);
				c--;
			}
			free(two_d_int_arr);
			return (NULL);
		}
		c++;
	}

	while (c < height)
	{
		a = 0;
		while (a < width)
		{
			two_d_int_arr[c][a] = 0;
			a++;
		}
		c++;
	}
	return (two_d_int_arr);
}
