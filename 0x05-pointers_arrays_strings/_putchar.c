#include <stdio.h>

/**
 * _putchar - writes c to stdout
 * @c: char to be displayed
 * Return: Sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
