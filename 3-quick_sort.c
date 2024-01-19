#include "sort.h"
#include <stdio.h>

int partition(int *array, int low, int high, size_t size)
{
	int c = high;
	int i;
	int tmp;
	int temp;

	for (i = high - 1; i >= low; i--)
	{
		if (array[i] > array[high])
		{

			c -= 1;
			tmp = array[i];
			array[i] = array[c];
			array[c] = tmp;
		}
	}
	temp = array[c];
	array[c] = array[high];
	array[high] = temp;

	return (c);
}

void quick_sort(int *array, size_t size)
{

	if (array == NULL || size < 2)
	{
		return;
	}

	if (size > 1)
	{
		size_t pi = partition(array, 0, size - 1, size);

		if (pi > 0)
		{
			quick_sort(array, pi);
		}

		quick_sort(array + pi + 1, size - pi - 1);
	}
}
