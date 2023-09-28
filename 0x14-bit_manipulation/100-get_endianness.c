#include "main.h"
/**
 * get_endianness - this checks endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int f;
	char *g;

	f = 1;

	g = (char *) &f;

	return (*g);
}
