#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head: Pointer to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

}
