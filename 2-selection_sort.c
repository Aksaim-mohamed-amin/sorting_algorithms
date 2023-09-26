#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 *                  Selection sort algorithm, and print the array each time a
 *                  swap happen.
 * @array: Array of integers.
 * @size: Size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, small_num_idx, tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		small_num_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[small_num_idx])
				small_num_idx = j;
		if (small_num_idx != i)
		{
			tmp = array[i];
			array[i] = array[small_num_idx];
			array[small_num_idx] = tmp;
			print_array(array, size);
		}
	}
}
