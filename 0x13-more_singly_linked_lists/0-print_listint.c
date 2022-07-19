#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	for (node = 0; h; node++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (node);
}
