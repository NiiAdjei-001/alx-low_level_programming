#include"lists.h"

/**
 * list_len - gets a length of the linked list..
 * @h: head node pointer.
 * Return: Returns the size of the linked list.
 */
size_t list_len(const list_t *h)
{
	if (h)
		return (1 + list_len(h->next));
	return (0);
}
