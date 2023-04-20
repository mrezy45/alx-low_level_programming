#include "function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;
	if(i < 0)
	{
		if(array != NULL && cmp != NULL)
		{
			while(i < size)
			{
				if(cmp(array[i]))
					return(1);
				i++;
			}
		}
	}

	return (-1);
}
