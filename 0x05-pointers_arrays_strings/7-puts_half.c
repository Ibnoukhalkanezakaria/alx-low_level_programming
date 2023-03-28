#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Using for and putchar
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = strlen(str);
int half_length = (length + 1) / 2;
int i;

for (i = half_length; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
