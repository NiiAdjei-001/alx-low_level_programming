#include"lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: address of head node.(listint **head)
 * @n: integer value
 * Return: returns the address of the added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (*head == NULL)
	{
		new  = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
			new->n = n;
			*head = new;
			return (new);
		}
	}
	else
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		else
		{
			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
		}
	}
}
