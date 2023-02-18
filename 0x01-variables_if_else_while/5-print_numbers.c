#include <stdio.h>
/**
 * main - program to print all single digit numnber
 * followed by new line
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf('\n');

	return (0);
}
