#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
int len = 0;

while (str[len] != '\0')
len++;

write(CHECK, str, len);
write(CHECK, "\n", 1);
}
