#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of two numbers.
 * @a: first number.
 * @b: second number (cannot be 0).
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Cannot divide by zero\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: first number.
 * @b: second number (cannot be 0).
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Cannot divide by zero\n");
		exit(100);
	}
	return (a % b);
}
