#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers, linearly
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to be searched
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%i]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}
