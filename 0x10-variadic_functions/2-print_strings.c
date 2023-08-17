#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - String printer.
 * @separator: comma or other viable separator.
 * @n: char count
 * @...: A variable number of chars
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*pointer to n*/
	va_list n_pointer;
	char *wrd;
	unsigned int x = 0;

	/*access variadic function arguments*/
	va_start(n_pointer, n);

	/*Iterate through as long as there's more strings*/
	while (x < n)
	{
		/*n_pointer points to next string, char is datatype expected by n_pointer*/
		wrd = va_arg(n_pointer, char *);

		if (wrd == NULL)
			printf("(nil)");
		else
			printf("%s", wrd);

		/*If not the last string, add a separator*/
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
		x++;
	}

	/*new line*/
	printf("\n");

	/*Finish going through the variadic function arguments*/
	va_end(n_pointer);
}
