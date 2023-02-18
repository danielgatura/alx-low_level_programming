#include <stdio.h>
/**
 * main - program o write lower case in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');

	return (0);
}
