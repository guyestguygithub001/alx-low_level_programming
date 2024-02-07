#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of,,
 * int using Linear search algorithm,,
 *
 * @array: input array,
 * @size: size of array,
 * @value: val to find in,
 * Return: EXIT_SUCCESS,,
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}