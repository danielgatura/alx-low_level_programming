#include <stdio.h>
/**
 * main -program to print lowercase and uppercase char
 * Return: 0 (Success)
 */
int main(void)
{
	char Al;

	for (Al = 'a'; Al <= 'z'; Al++)
		putchar(Al);

	for (Al = 'A'; Al <= 'Z'; Al++)
		putchar(Al);

	putchar('\n');

	return (0);
}
