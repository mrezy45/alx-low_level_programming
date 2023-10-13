#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the first node
 * Return: Returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * else, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0, a;

	current = head;
	while (current != NULL)
	{
		a = current->n;
		sum += a;
		current = current->next;
	}
	if (sum == 0)
	{
		return (0);
	}
	return (sum);
}
