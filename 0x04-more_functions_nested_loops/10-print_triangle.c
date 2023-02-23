#include "main.h"
/**
 *print_triangle -program print pattern of triangle
 *@size: how big triangle will be
 *Return: empty
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = size - x; y > 1; y--)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}