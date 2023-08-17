#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterates through an array and applies a function to each element.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @action: Pointer to the function to apply to each element.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
