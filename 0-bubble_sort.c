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
	int tmp, swap = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap)
			swap = 0;
		else
			return;
	}
}
