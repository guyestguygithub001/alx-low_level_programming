#include "main.h"

/**
 * print_traingle - entry point
 * Description:i Prints diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size);
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{

			for (j = i; = j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
