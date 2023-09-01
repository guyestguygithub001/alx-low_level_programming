#include "main.h"

/**
 * clear_bit - to set bit value to 0
 * @n: pointer to next no. for change.
 * @index: ind. of bit to be erased.
 *
 * Return: 1 to success, -1 to failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
