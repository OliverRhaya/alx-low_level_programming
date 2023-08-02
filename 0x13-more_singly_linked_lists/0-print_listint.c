#include "lists.h"

/**
 * print_listint - This will display all the elements of a linked list
 * @l: linked list of type listint_t to display
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *l)
{
	size_t num = 0;

	while (l)
	{
		printf("%d\n", l->n);
		num++;
		l = l->next;
	}

	return (num);
}
