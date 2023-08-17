#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: comma or other viable separator.
 * @n: int count
 * @...: variable number of ints
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*pointer to n*/
	va_list n_pointer;
	unsigned int x = 0;

	/*access variadic function arguments*/
	va_start(n_pointer, n);

	/*Iterate through as long as there's more integers*/
	while (x < n)
	{
		/*n_pointer points to n, int is datatype expected by n_pointer*/
		printf("%d", va_arg(n_pointer, int));

		/*If not the last number, add a separator*/
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
		x++;
	}

	/*next line*/
	printf("\n");

	/*Finish going through the variadic function arguments*/
	va_end(n_pointer);
}
