#include <stdlib.h>
#include <time.h>
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
	printf("is positve %d\n", n);
	}
	if (n == 0)
	{
	printf("is zero %d\n", n);
	}
	if (n < 0)
	{
	printf("is positiv %d\n", n);
	}
	return (0);
}
