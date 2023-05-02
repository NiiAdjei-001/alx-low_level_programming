#include "lists.h"
/**
 * listint_len - Get's the number of nodes in the linked list
 * @h: head node
 * Return: Returns the number of elements in a linked list
 *
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + listint_len(h->next));
}
