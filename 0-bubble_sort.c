#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: the array of intagers
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int tmp = 0;

	if (array == NULL)
	{
		return;
	}
	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
