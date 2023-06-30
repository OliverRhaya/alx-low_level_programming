#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - outputs c to stdout
 * @c: The character to be printed
 *
 * Return 0: On success 1.
 * On error, -1 is returned, and error is set accordingly. 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
