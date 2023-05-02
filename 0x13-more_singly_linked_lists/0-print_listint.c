#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: header node of a linked list
 * Return: returns the size of the linked list
 *
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		if (h->next == NULL)
			return (1);
		else
			return (1 + print_listint(h->next));
	}
}
