#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - generates random valid passwords
 *
 * Return: 0
 */
int main(void)
{
	int passwd[64];
	int x, total, y;


	total = 0;


	srand(time(NULL));

	x = 0;
	while (x < 64)
	{
		passwd[x] = rand() % 78;
		total = total + (passwd[x] + '0');
		putchar(passwd[x] + '0');
		if ((2772 - total) - '0' < 78)
		{
			y = 2772 - total - '0';
			total = total + y;
			putchar(y + '0');
			break;
		}
		x++;
	}


	return (0);
}
