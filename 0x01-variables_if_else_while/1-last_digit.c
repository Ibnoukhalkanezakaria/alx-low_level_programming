#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - use if and else to print the answer
 *Return: 0
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (a < 6 && a != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}
	return (0);
}
