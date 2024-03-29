#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to pint
 * @size: size of array to print
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (!array)
		return;
	for (; i < size; i++)
		printf("%d%s", array[i], (i < size - 1) ? ", " : "\n");
}

/**
 * ex_bin_search - perfoms a binary search
 * @array: on array @array
 * @start: from start
 * @end: to stop
 * @value: for value @value
 * Return: the index of the first occurence of value
 */
int ex_bin_search(int *array, size_t start, size_t end, int value)
{
	size_t mid = start + (end - start + 1) / 2;

	if (!array || end - start == 0)
		return (-1);
	printf("Searching in array: ");
	print_array(array + start, end - start);

	if (value == array[mid])
		return (mid);
	if (array[mid - 1])
	{
		if (array[mid - 1] == value)
			return (mid - 1);
	}
	else if (array[mid + 1])
	{
		if (array[mid + 1])
			return (mid + 1);
	}
	if (value < array[mid])
		return (ex_bin_search(array, start, mid, value));
	if (value > array[mid])
		return (ex_bin_search(array, mid, end, value));
	return (-1);
}

/**
 * exponential_search - performs exponential search on array
 * @array: array to work on
 * @size: size of array
 * @value: value to find
 * Return: index of value || -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, end;

	if (!array || !size)
		return (-1);

	if (array[i] == value)
		return (i);
	i++;
	for (; i < size && value > array[i]; i = i * 2)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	end = (i >= size) ? size - 1 : i;

	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, end);
	return (ex_bin_search(array, i / 2, i, value));
}
