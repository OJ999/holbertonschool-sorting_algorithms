#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int swapped;
    size_t i, j;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);  // Print after each swap
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;  // Array is already sorted
    }
}