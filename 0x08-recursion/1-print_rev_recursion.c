#include "main.h"
/**
 * _print_rev_recursion - reverses string
 * @s: string
 */
void _print_rev_recursion(char *s)
{       
        /*If there's still more to the string*/
        if (*s)
        {
                /*Continue till the end*/
                _print_rev_recursion(s + 1);
                /*print from the end*/
                _putchar(*s);
        }
}

