#include "sort.h"
/**
 * bubble_sort - sorts array of integers in ascending order
 * @array: array of integers to be sorted
 * @size: no of elements to be sorted
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}
}

