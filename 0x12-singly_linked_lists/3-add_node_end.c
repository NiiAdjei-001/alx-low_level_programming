#include"lists.h"
/**
 * add_to_tail - add new node to tail of the list
 * @node : current node
 * @new : new node
 *
 */
void add_to_tail(list_t *node, list_t *new)
{
	if (node->next == NULL)
		node->next = new;
	else
	{
		add_to_tail(node->next, new);
		return;
	}
}
/**
 * add_node_end - Adds a node to the front of the linked list.
 * @head: head node pointer address.
 * @str: string value
 * Return: Returns the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
		*head = new;
	else
		add_to_tail(*head, new);
	return (new);
}
