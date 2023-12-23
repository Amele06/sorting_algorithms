#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int a;


	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				a = array[j];
				array[j] = array[j + 1];
				array[j + 1] = a;
				print_array(array, size);
			}
		}
	}
}
