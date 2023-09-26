#include "sort.h"

/**
 * merge - Merge two subarrays into one sorted array.
 * @array: The original array containing subarrays to merge.
 * @buff: A buffer to store the sorted subarray.
 * @left: The left index of the subarray.
 * @mid: The middle index of the subarray.
 * @right: The right index of the subarray.
 */
void merge(int *array, int *buff, size_t left, size_t mid, size_t right)
{
	size_t i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(array + left, mid - left);

	printf("[right]: ");
	print_array(array + mid, right - mid);

	for (i = left, j = mid; i < mid && j < right; k++)
		buff[k] = (array[i] < array[j]) ? array[i++] : array[j++];
	for (; i < mid; i++)
		buff[k++] = array[i];
	for (; j < right; j++)
		buff[k++] = array[j];
	for (i = left, k = 0; i < right; i++)
		array[i] = buff[k++];

	printf("[Done]: ");
	print_array(array + left, right - left);
}

/**
 * merge_sort_recursive - apply the top-down merge sort through recursion.
 * @array: An array of integers to sort.
 * @buff: A buffer to store the sorted result.
 * @left: The left index of the subarray.
 * @right: The right index of the subarray.
 */
void merge_sort_recursive(int *array, int *buff, size_t left, size_t right)
{
	size_t mid;

	if (right - left > 1)
	{
		mid = left + (right - left) / 2;
		merge_sort_recursive(array, buff, left, mid);
		merge_sort_recursive(array, buff, mid, right);
		merge(array, buff, left, mid, right);
	}
}

/**
 * merge_sort - Sort array of integers in ascending order using the merge sort.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Implements the top-down merge sort algorithm.
 */
void merge_sort(int *array, size_t size)
{
	int *buff;

	if (array == NULL || size < 2)
		return;

	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
		return;

	merge_sort_recursive(array, buff, 0, size);

	free(buff);
}

