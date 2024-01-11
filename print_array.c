#include "sort.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @size: Number of elements in the array.
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);

        if (i < size - 1)
            printf(", ");
    }

    printf("\n");
}
