#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list nums;
    unsigned int index;

    va_start(nums, n);

    for (index = 0; index < n; index++)
    {
        int num = va_arg(nums, int);
        printf("%d", num);

        if (index != n - 1 && separator != NULL)
            printf("%s", separator);
    }

    printf("\n");

    va_end(nums);
}
