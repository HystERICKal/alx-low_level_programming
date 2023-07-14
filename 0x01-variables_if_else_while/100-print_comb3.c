#include <stdio.h>


/**
 * main - prints 01, 02, 03...
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, j;


	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
