#include "main.h"


/**
 * _abs - computes absolute value of an number
 * @numb: the number to check
 * Return: the number as absolute
 */
int _abs(int numb)
{
	if (numb >= 0)
		return (numb);
	return (-1 * numb);
}
