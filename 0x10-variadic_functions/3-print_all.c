#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - this one prints anything
 * @format: cifs
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *wrd, *delimitr = "";

	/*pointer to the arguments*/
	va_list arg_pointr;

	/*access variadic function arguments*/
	va_start(arg_pointr, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x]) /*Can't use for, while e.tc.*/
			{
				/*print separator first then argument*/
				case 'c':
					/*arg_pointr points to argument, char is datatype expected by arg_pointr*/
					printf("%s%c", delimitr, va_arg(arg_pointr, int));
					break;
				case 'i':
					/*arg_pointr points to argument, int is datatype expected by arg_pointr*/
					printf("%s%d", delimitr, va_arg(arg_pointr, int));
					break;
				case 'f':
					/*arg_pointr points to argument, float is datatype expected by arg_pointr*/
					printf("%s%f", delimitr, va_arg(arg_pointr, double));
					break;
				case 's':
					/*arg_pointr points to argument, char * is datatype expected by arg_pointr*/
					wrd = va_arg(arg_pointr, char *);
					if (wrd == NULL)
						wrd = "(nil)";
					printf("%s%s", delimitr, wrd);
					break;
				default:
					/*ignore other formats*/
					x++;
					continue;
			}
			/*print this before every arg*/
			delimitr = ", ";
			x++; /*increment*/
		}
	}
	/*New line*/
	printf("\n");
	/*Finish going through the variadic function arguments*/
	va_end(arg_pointr);
}
