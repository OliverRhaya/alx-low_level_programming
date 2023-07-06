#include "main.h"
/**
 * _print_rev_recursion - This is a function that outputs a string in reverse.
 * @s: The refers to the string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
