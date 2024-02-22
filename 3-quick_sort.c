#include "sort.h"

/**
 * lomuto - lomuto partition scheme for quicksort
 * @upper: upperbound of the array
 * @lower: lowerbound of the array
 * @size: size of the array
 * @array: the array to be sorted
 * Return: index of the pivot element
 */

size_t lomuto(int *array, size_t lower, size_t upper, size_t size)
{
	int pivot = array[upper];
	size_t i = (lower - 1);
	size_t j;

	for (j = lower; j <= upper - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_num(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap_num(&array[i + 1], &array[upper]);
	print_array(array, size);

	return (i + 1);
}
/**
 * quicksort_imp - implementation of the quicksort function
 * @upper: upperbound of the array
 * @lower: lowerbound of the array
 * @array: the array to be sorted
 * @size: size of the array to be sorted
 * Return: void
 */

void quicksort_imp(int *array, size_t lower, size_t upper, size_t size)
{
	size_t idx_pivot = lomuto(array, lower, upper, size);

	if (lower < upper)
	{
		quicksort_imp(array, lower, idx_pivot - 1, size);
		quicksort_imp(array, upper, idx_pivot + 1, size);
	}
}

/**
 * * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to be sorted
 * @size: size of the array to be sorted
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
		print_array(array, size);
}

/**
 * swap_num - swaps two numbers in an array
 * @num1: first number
 * @num2: second number
 */

void swap_num(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
