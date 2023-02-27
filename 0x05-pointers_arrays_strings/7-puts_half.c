#include "main.h"
#include <stdio.h>
/**
 * puts_half - function print half of the string
 * @str: the string tobe printed
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++
	}
	if  (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}
	for (; k < j; k++)
	{
	_putcha(str[k]);
	}
	_putchar('\n');
}
