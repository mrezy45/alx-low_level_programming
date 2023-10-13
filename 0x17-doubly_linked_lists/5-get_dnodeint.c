#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the
 * nth node of a dlistint_t linked list.
 * @head: Pointer to the first node
 * @index: Positon to return node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
