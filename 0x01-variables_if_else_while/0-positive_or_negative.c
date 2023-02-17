#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program to determine if number is positve or negative
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf(n, "%d is positive\n");
	}
	if (n == 0)
	{
	printf(n, "%d is zero\n");
	}
	if (n < 0)
	{
	printf(n, "%d is negative \n");
	}
	return (0);
}
