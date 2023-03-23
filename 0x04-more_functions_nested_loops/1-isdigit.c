#include <stdio.h>

/**
 *_isdigit - using if to return 1 or 0
 *@c: input
 *Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

