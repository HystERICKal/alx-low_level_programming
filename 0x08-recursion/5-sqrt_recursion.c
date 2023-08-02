#include "main.h"


/**
 * _sqrt_recursion - proxy recursion function
 * @n: squared number
 *
 * Return: root factor
 */
int _sqrt_recursion(int n)
{
	/*No imaginary numbers today*/
	if (n < 0)
		return (-1);
	return (true_sqrt_recursion(n, 0));
}


/**
 * true_sqrt_recursion - recursion happens here
 * @n: squared number
 * @x: increment this
 *
 * Return: root factor
 */
int true_sqrt_recursion(int n, int x)
{
	/*Number doesn't have a natural square root*/
	if (x * x > n)
		return (-1);
	/*Found it!!!!!!!!!!!!*/
	if (x * x == n)
		return (x);
	/*Keep going*/
	return (true_sqrt_recursion(n, x + 1));
}
