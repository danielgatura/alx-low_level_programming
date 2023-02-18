#include <stdio.h>
/**
 * main - program to print lowercase followed by new line
 * Return: 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc != 'q')
			putchar(lc);

	}

	putchar('\n');

	return (0);
}
