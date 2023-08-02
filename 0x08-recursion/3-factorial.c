#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the given number
 *
 * Return: factorian as an integer
 */
int factorial(int n)
{
	/*Indicates error*/
	if (n < 0)
		return (-1);
	/*Factorial of 0 is 1*/
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
