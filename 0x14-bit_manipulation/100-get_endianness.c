#include "main.h"

/**
 * get_endianness - to check if machine is little or big endian...
 * Return: 1 for big, 0 for little...
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
