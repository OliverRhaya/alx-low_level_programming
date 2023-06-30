#include "main.h"

/**
 * _isdigit - confirms if numbers are 0 - 9
 * @c: char to be validated
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
