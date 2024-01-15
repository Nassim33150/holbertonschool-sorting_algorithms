#include "sort.h"
#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
    size_t i;

    int max = array[0];

    for (i = 0; i < size - 1; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("Largest element present in given array: %d\n", max);
}
