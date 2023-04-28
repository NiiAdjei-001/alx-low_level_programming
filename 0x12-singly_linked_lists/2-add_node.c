#include"lists.h"
/**
 * get_string_length - get the length of a string;
 * @str: string value
 * Return: returns the length of the string
 */
int get_string_length(const char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;
	return (len);
}


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
	new->len = get_string_length(str);
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
