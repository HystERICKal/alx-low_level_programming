#include "main.h"
/**
 * is_prime_number - check if int is prime numebr
 * @n: integer in question
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (optimus_prime(n, n - 1));
}


/**
 * optimus_prime - recursion happens here
 * @n: integer in question
 * @x: increment this
 *
 * Return: 1 or 0
 */
int optimus_prime(int n, int x)
{
	/*Is 1 really a prime number?*/
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (optimus_prime(n, x - 1));
}
