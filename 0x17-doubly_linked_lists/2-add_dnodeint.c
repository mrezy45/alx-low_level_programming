#include "lists.h"
/**
 * add_dnodeint - Function that adds new node at
 * the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to first node
 * @n: int value of new_node
 * Return: Address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
		{
			*head = new_node;
			new_node->prev = NULL;
			new_node->next = NULL;
			new_node->n = n;
		}
		else
		{
			current = *head;
			*head = new_node;
			new_node->prev = NULL;
			new_node->next = current;
			current->prev = new_node;
			new_node->n = n;
		}
	}
	return (new_node);
}
