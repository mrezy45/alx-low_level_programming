#include "search_algos.h"

/**
 * linear_search - searches for a value in a given array
 * of integers using a linear search algorithm
 *
 * @array: input array
 * @size: size of array
 * @value: value being searched
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value Checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
