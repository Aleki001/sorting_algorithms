#include "sort.h"
/**
 * quick_sort_hoare - sorts an array of integers
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
/**
 * quicksort - recursively sorts array of integers by separating into two
 * partitions, using Hoare quick sort
 * @array: array of integers to be sorted
 * @low: index in source array that begins partition
 * @high: index in source array that ends partition
 * @size: amount of elements in array
 */
void quicksort(int *array, size_t low, size_t high, size_t size)
{
	size_t border;

	if (low < high)
	{
		border = hoare_partition(array, low, high, size);
		quicksort(array, low, border, size);
		quicksort(array, border + 1, high, size);
	}
}
/**
 * hoare_partition - Hoare partition scheme using rightmost index as pivot;
 * other pivot implementations exist, with some with greater efficiency: see
 * peudocode below function defs for middle or low pivot schema
 * @array: array of integers to be sorted
 * @low: index in source array that begins partition
 * @high: index in source array that ends partition
 * @size: amount of elements in array
 * Return: new index at which to start new recursive partition
 */
int hoare_partition(int *array, size_t low, size_t high, size_t size)
{
	int i, j, pivot, temp;

	pivot = array[high];
	i = low - 1;
	j = high + 1;
	while (true)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i == j)
			return (j - 1);
		else if (i > j)
			return (j);
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
}
