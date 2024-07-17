#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array
 * using a binary search algorithm, not guaranted to return the
 * lowest index if `value` appears twice in `array`
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value being serached for
 *
 * Return: index containing `value`, or -1 if `value` is not
 * found or `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (x = low; x <= high; x++)
			printf("%i%s", array[x], x == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
