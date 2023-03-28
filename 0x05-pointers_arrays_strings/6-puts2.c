#include "main.h"

/**
 * puts2 - using loop and putchar
 * putchar
 * @str: string
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
