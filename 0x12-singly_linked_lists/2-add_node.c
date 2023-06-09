#include"lists.h"
/**
 * add_node - Adds a node to the front of the linked list.
 * @head: head node pointer address.
 * @str: string value
 * Return: Returns the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		*head = new;
		new->next = temp;
	}
	return (new);
}
