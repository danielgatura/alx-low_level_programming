#include <stdio.h>
/**
 * main - program that prints all possible combinations of
 * single-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);

}
