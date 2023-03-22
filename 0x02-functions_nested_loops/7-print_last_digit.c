#include "main.h"
/**
 * using if and putchar
 * @n: number
 * Return: n%10
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
