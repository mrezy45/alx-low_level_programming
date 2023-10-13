#include "lists.h"
/**
 * dlistint_len - Function that returns number of
 * elements in a linked dlistint_t list.
 * @h: Pointer to first head
 * Return: Number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t a = 0;

	current = h;
	while (current != NULL)
	{
		a++;
		current = current->next;
	}
	return (a);
}
