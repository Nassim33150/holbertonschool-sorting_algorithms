#include "sort.h"
#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
    size_t i;
    size_t temp;

    int max = array[0];
    size_t maxIndex = 0;

    for (i = 0; i < size - 1; i++)
    {

        if (array[i] > max)
        {
            max = array[i];

            maxIndex = i;
        }
    }

    if (maxIndex < size - 1)
    {
        temp = array[maxIndex];
        array[maxIndex] = array[maxIndex + 1];
        array[maxIndex + 1] = temp;
    }
}
