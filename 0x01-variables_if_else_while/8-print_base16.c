#include <stdio.h>
/**
 * main - prints the Hex characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[16] = "0123456789abcdef";
	int i;


	for (i = 0; i < 16; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
