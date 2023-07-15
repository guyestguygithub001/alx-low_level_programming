#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main() {
  char lowercase = 'a';
  while (lowercase <= 'z') {
    printf("%c\n", lowercase);
    lowercase++;
  }
  return 0;
}
