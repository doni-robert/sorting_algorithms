#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *
 * @array: the array of integers
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	if (array != NULL)
		return
	for (j = 0; j < (size - 1); j++)
	{
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
