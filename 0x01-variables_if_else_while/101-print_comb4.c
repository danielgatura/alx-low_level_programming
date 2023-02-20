#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int c, d, b;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (b = d + 1; b <= '9'; b++)
			{
				if ((c != d) != b)
				{
					putchar(c);
					putchar(d);
					putchar(b);
					if (c == '8' && d == '9')
					continue;
					putchar(',');
					putchar(' ');
					
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
