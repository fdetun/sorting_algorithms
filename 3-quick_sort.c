#include "sort.h"

/**
 * swaparr - swaparr function
 *@a : int
 *@b : int
 * Return: void
 */
void swaparr(int *a, int *b)
{
int tmp = 0;

tmp = *b;
*b = *a;
*a = tmp;
}

/**
 * quicksort - recursion function of quick sort
 *@array: unsorted array
 *@low : int
 *@high : int
 *@size : size of array
 * Return : void
 */
void quicksort(int *array, int high, int low, size_t size)
{
	int pivot;

	if (high < low)
	{
		pivot = partition(array, high, low, size);
		quicksort(array, high, pivot - 1, size);
		quicksort(array, pivot + 1, low, size);
	}
}

/**
 * partition - move elements smaller than pivot before it
 * and greater than pivot after it
 *@array : unsorted array
 *@low : int
 *@high : int
 *@size : size of array
 * Return: leftwall
 */
int partition(int *array, int high, int low, size_t size)
{
	int pivot = array[low], leftwall = high - 1, i = 0;

	for (i = high; i < low; i++)
		if (array[i] < pivot)
		{
			leftwall = leftwall + 1;
			swaparr(&array[i], &array[leftwall]);
			if (leftwall != i)
				print_array(array, size);
		}
	swaparr(&array[low], &array[leftwall + 1]);
	if (low != (leftwall + 1))
		print_array(array, size);
	return (leftwall + 1);
}

/**
 * quick_sort - sort an array
 *@array : unsorted array
 *@size : size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int i = 0;

	if (array == NULL)
		return;
	quicksort(array, i, size - 1, size);
}
