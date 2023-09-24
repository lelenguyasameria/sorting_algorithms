#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
*/
typedef enum bool
{
false = 0,
true
} bool,

/**
 * struct listint_s - singly linked list of integers
 * @n: Integer value stored in the node
 * @next: Pointer to the next node
 *
 * Description: This structure defines a node for a singly linked list
 * of integers.
 */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: The size of the array
 *
 * Description: This function prints the elements of an integer array.
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a singly linked list of integers
 * @head: Pointer to the head of the linked list
 *
 * Description: This function prints the elements of a singly linked list.
 */
void print_list(const listint_t *head);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending orderWq
 
* @list: Pointer to a pointer to the head of the linked list
 *
 * Description: This function sorts a doubly linked list of integers in ascending order
 * using the insertion sort algorithm.
 */
void insertion_sort_list(listint_t **list);

/**
 * bubble_sort - Sorts an array of integers in ascending order using bubble sort
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: This function sorts an integer array in ascending order using the
 * bubble sort algorithm.
 */
void bubble_sort(int *array, size_t size);

/**
 * selection_sort - Sorts an array of integers in ascending order using selection sort
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: This function sorts an integer array in ascending order using the
 * selection sort algorithm.
 */
void selection_sort(int *array, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order using quick sort
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Description: This function sorts an integer array in ascending order using the
 * quick sort algorithm.
 */
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
