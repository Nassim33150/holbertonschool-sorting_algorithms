#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps two elements in an array.
 *
 * This function swaps the elements at the specified indices in the given array.
 *
 * @param array The array containing the elements to be swapped.
 * @param idx1 The index of the first element to be swapped.
 * @param idx2 The index of the second element to be swapped.
 */
void swap(int *array, int idx1, int idx2)
{
	int tmp = array[idx1];
	array[idx1] = array[idx2];
	array[idx2] = tmp;
}

/**
 * partition - partitions an array for quicksort.
 *
 * @param array The array to be partitioned.
 * @param low The starting index of the partition.
 * @param high The ending index of the partition.
 * @param size The size of the array.
 * @return The index of the pivot element after partitioning.
 *
 */
int partition(int *array, int low, int high, int size)
{
	int piv, i, j;

	piv = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] <= piv)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	i++;
	if (array[i] > array[high])
	{
		swap(array, i, high);
		print_array(array, size);
	}
	return (i);
}

/**
 * _quick_sort - Recursive implementation of quicksort for an array.
 *
 * This function recursively sorts the subarrays before and after the
 * partitioning index. It utilizes the partition function and prints
 * the array after each swap.
 *
 * @param array The array to be sorted.
 * @param low The starting index of the subarray.
 * @param high The ending index of the subarray.
 * @param size The size of the array.
 */
void _quick_sort(int *array, int low, int high, int size)
{
	int piv;

	if (low >= high || low < 0)
		return;

	piv = partition(array, low, high, size);

	_quick_sort(array, low, piv - 1, size);
	_quick_sort(array, piv + 1, high, size);
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the partition and the function _quick_sort.
 */
void quick_sort(int *array, size_t size)
{
	_quick_sort(array, 0, size - 1, size);
}
