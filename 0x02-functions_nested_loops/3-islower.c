#include "main.h"

/**
 * _islower - using if and return
 * @c: the main caracter
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c < 'z')
	{
		return (1);
	}
	return (0);
}
