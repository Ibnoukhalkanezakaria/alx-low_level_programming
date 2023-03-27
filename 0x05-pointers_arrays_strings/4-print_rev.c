#include "main.h"

/**
 * print_rev - using while
 * @s: string
 */
void print_rev(char *s)
{
int len = 0;

/* Find the length of the string */
while (s[len] != '\0')
len++;

/* Print the string in reverse */
for (int i = len - 1; i >= 0; i--)
_putchar(s[i]);

/* Print a new line */
_putchar('\n');
}
