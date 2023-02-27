#include "main.h"
#include <stdio.h>
/**
 *_puts- print string followed by a line
 *@str: the string to be printed
 *Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
