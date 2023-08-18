#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Strings to be printed followed by a new line
 * @separator: Print the strings between strings
 * @n: number of strings passed into function
 * @...: A variable number of strings to be printed
 *
 * Description: If separator = NULL, it is not printed
 *              If one of the strings = NULL, "(nil)" is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index;
	char *str;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
