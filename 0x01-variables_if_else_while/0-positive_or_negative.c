#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * using if and else in this function
 * Return: 0
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n)
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("0 is zero\n");
	}
	return (0);
}
