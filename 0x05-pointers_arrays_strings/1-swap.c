#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	/*temporary storage variable detected*/
	int x;


	x = *a;
	*a = *b;
	*b = x;
}
