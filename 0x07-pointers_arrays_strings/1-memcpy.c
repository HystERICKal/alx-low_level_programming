#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@dest: final memory location
 *@src: initial memory location
 *@n: bytes
 *
 *Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	while (x < y)
	{
		dest[x] = src[x];
		n--;
		x++;
	}
	return (dest);
}
