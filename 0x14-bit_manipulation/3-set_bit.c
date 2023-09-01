#include "main.h"

/**
 * set_bit - func. to set bit at a given to 1.
 * @n: pointer for number change.
 * @index: ind. of bit set for 1.
 *
 * Return: 1 on success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
