#include "main.h"

/**
 * print_numbers - ouptut 0-9
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
