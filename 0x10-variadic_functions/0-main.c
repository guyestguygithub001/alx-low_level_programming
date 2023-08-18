#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int result1 = sum_them_all(2, 98, 1024);
    int result2 = sum_them_all(4, 98, 1024, 402, -1024);

    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;
}
