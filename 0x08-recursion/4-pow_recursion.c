
#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value
 * @y: power
 *
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	/*Negative exponent means its in the denominator*/
	if (y < 0)
		return (-1);
	/*Anything to power 0 is 1*/
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
