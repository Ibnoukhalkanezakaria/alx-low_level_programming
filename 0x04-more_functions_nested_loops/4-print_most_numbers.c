#include "main.h"

/**
 *print_most_numbers - using while and putchar
 *Return: Void
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(48 + i);
		}
	i++;
	}
	_putchar('\n');
}

