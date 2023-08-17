#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  sums all its parameters
 * @n: fixed argument
 * @...: variable arguments
 * Return: 0 or sum total of parameters if they exist
 */
int sum_them_all(const unsigned int n, ...)
{
	/*pointer to n*/
	va_list n_pointer;
	unsigned int x = 0, tot = 0;

	/*access variadic function arguments*/
	va_start(n_pointer, n);

	while (x < n)
	{
		/*n_pointer points to n, int is datatype expected by n_pointer*/
		tot = tot + va_arg(n_pointer, int);
		x++;
	}

	/*Finish going through the variadic function arguments*/
	va_end(n_pointer);
	return (tot);
}
