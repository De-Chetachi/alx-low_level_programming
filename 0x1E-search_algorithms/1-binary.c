#include "search_algos.h"

/**
* binary_search - searches for a value in an array of integers
* using the binary search algorithm
* @array: pointer to an array of integers
* @size: size of the array
* @value: the value to be found
* Return: value's index or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int temp = size;
	size_t mid;

	if (!array)
		return (-1);
	/*handle an array with single element*/
	if (size == 1)
	{
		printf("Searching in array: %d\n", array[0]);
		if (value == array[0])
			return (0);
	}
	else if (size > 1)
	{
		mid = size / 2;
		if (!(size % 2))
			mid -= 1;
		print_array(array, size);
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
		{
			/*(array + size) = NULL;*/
			return (binary_search(array, mid, value));
		}
		else
			return (binary_search(array + mid + 1, temp - mid - 1, value));
	}
	return (-1);
}

/**
* print_array - prints a search array
* @array: pointer to first element of array
* @size: size of array
* Return: 0
*/

int print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i == (size - 1))
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	return (0);
}
