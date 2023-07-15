#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
printf("%d\n", i);
}
}
int main(void)
{
print_numbers();
return 0;
}
