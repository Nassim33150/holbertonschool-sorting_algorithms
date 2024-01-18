#include "sort.h"
#include <stdio.h>

void quick_sort(int *array, size_t size)
{

	size_t i;
	size_t j;
	size_t pivot = size - 1;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = pivot; i > 0; i--)
	{
		for (j = 0; j < pivot; i++)
		{
			if (array[i] < pivot || array[i] >= pivot)
			{
				quick_sort(array, pivot);
			}
		}
	}
}
