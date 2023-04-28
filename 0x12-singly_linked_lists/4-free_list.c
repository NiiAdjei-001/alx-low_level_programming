#include"lists.h"
/**
 * free_from_tail - go to tail of the list and free memory
 * @node : current node
 */
void free_from_tail(list_t *node)
{
	if (node->next != NULL)
		free_from_tail(node->next);
	free(node);
	return;
}
/**
 * free_list - clear list and release memory
 * @head: head node pointer address
 */
void free_list(list_t *head)
{

	if (head != NULL)
		free_from_tail(head);
}
