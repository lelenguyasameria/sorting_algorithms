#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts array of integers in ascending order using Bubble sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Description:
 * This function sorts the given integer array in ascending order
 * using the Bubble sort algorithm. It prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* Flag to check if any swaps were made during this pass */

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap array[j] and array[j + 1] */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				swapped = 1; /* Set the flag to indicate a swap was made */

				/* Print the array after each swap */
				for (size_t k = 0; k < size; k++)
				{
					if (k == size - 1)
						printf("%d\n", array[k]);
					else
						printf("%d, ", array[k]);
				}
			}
		}

		/* If no swaps were made during this pass, the array is already sorted */
		if (swapped == 0)
			break;
	}
}

