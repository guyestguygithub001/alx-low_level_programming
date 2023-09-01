#include "main.h"

/**
 * get_bit - value of a bit at an index for a float retured.
 * @n: search no.
 * @index: bit ind.
 *
 * Return: only bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
