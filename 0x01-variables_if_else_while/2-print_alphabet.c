#include <stdio.h>
/**
 * main - program to print lowercase alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghigklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
	putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
