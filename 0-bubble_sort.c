#include "sort.h"

/**
 * swap_ints - swap two integers in  array.
 *@a: The first to swap
 @b: The second to swap
 */
void swap_ints(int *x, int *y)
{
int tmp;

tmp = *x;
*x = *y;
*y = tmp;

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
	size_t i, len = size;
	bool bubbly = false;



	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if  (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}

