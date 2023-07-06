#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: This is he string to be measured.
 *
 * Return:This is  the length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
