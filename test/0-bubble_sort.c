#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 *               Bubble sort algorithm, and print the array each time
 *               a swap happend.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	bool swapped;

	if (array == NULL || size <= 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				swapped = true;
				print_array(array, size);
			}
		}
		if (!swapped)
			return;
	}
}
