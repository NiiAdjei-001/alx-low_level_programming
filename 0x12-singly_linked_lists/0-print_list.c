#include"lists.h"

/**
 * print_list - prints all elements of a linked list.
 * @h: head node pointer.
 * Return: Returns the size of the linked list.
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		return (1 + print_list(h->next));
	}
	return (0);
}
