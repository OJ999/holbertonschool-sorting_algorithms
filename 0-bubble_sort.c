#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
int flag, aux = 0; /* aux to make the swap */
size_t i, stop = (size - 1); /* stop: don't be out of the array */

if (array == NULL || size < 2)
return(0);
for (i = 0; i < stop; i++)
{
flag = 0;
if (array[i] > array[i + 1])
{
aux = array[i];
array[i] = array[i + 1];
array[i + 1] = aux;
print_array(array, size);
flag = 1; /* a swap was made */
}
if (flag == 0 && i == stop - 1)  /* everything is in order */
return(0);
if (i == (stop - 1) && flag == 1)   /* last position */
{
i = -1;    /* start from the beginning */
stop--;   /* the last elements are in order */
}
}
}
