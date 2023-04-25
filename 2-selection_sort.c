#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 *       selection sort algorithm
 *
 * @array: the array to be sorted
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	int smallest, temp;
	size_t i, j, t;

	for (i = 0; i < (size); i++)
	{
		smallest = array[i];

		for (j = 1; j < (size - i); j++)
		{
			if (array[i + j] < smallest)
			{
				t = i + j;
				smallest = array[i + j];
			}
		}
		temp = array[i];
		array[i] = array[t];
		array[t] = temp;

		print_array(array, size);
	}
}
