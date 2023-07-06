#include "main.h"
#include <unistd.h>
/**
 * _putchar -Function that writes the character c to stdout
 * @c: This is the character to output
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
