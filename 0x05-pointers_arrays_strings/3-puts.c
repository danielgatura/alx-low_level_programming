#include "main.h"
#include <stdio.h>
/**
 *_puts- print string followed by a line
 *@str: the string to be printed
 *Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\n'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
