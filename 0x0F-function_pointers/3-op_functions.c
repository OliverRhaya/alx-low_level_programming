#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function that returns the sum of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function that returns the difference of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Function that returns the product of two numbers.
 * @a: This is the first number.
 * @b: Thhis is the second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function that returns the division of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Function that returns the remainder of the division of two numbers.
 * @a: This is the first number.
 * @b: This is the second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
