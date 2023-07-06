#include "main.h"

int actual_prime(int a, int i);

/**
 * is_prime_number -function that confirms if an integer is a prime number or not
 * @a:This is the  number to evaluate
 *
 * Return: 1 if a is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (a <= 1)
		return (0);
	return (actual_prime(a, a - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @a:This is the number to evaluate
 * @i:This is an iterator
 *
 * Return: 1 if a is prime, 0 if not
 */
int actual_prime(int a, int i)
{
	if (i == 1)
		return (1);
	if (a % i == 0 && i > 0)
		return (0);
	return (actual_prime(a, i - 1));
}
