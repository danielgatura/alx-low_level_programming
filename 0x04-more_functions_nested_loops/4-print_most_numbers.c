#include "main.h"
/**
 *print_most_numbers - print numbers from 0 to 9 but not 2 and 4
 *Return: numbers from 0 to 9 expect 2 and 4
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	if (c == 2 || c == 4)
	{
	continue;
	}
	_putchar(c + '0');
	}
	_putchar('\n');
}
