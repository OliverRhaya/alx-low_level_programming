
#include "main.h"
/**
 * _puts_recursion -This is a  function like puts();
 * @s:This is an input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
