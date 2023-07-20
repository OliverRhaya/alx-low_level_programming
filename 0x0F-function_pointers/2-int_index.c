#include "function_pointers.h"
/**
 * int_index -This is a function that returns index place if comparison = true, else -1
 * @arrayThis is an array
 * @size:Represents the size of the elements in the array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
