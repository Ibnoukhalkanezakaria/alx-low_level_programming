#include "main.h"

/**
 *print_line - using loop and putchar
 *@n: input
 *Return Void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		i = 0;

		for (i = 0; i < n ; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
