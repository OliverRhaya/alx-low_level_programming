#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion -function that returns the natural square root of a number
 * @x:This is the  number whose square root is to be calculated
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (actual_sqrt_recursion(x, 0));
}

/**
 * actual_sqrt_recursion -Function that recurses to find the natural
 * square root of a number
 * @n:The number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (actual_sqrt_recursion(x, y + 1));
}
