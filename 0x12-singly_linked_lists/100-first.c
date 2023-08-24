#include <stdio.h>
void print_before_main(void) __attribute__ ((constructor));
/**
 * print_before_main - this one prints a sentence
 */
void print_before_main(void)
{
	printf("You're beat! and yet, ");
	printf("you must allow,\n");
	printf("I bore my house upon my back!\n");
}
