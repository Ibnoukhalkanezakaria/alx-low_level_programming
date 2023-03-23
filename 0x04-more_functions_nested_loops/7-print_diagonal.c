#include "main.h"

/**
 *print_diagonal -  using if and loop & putchar
 *@n: input
 *Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j = 0;

			for (j = 0; j < i ; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}

