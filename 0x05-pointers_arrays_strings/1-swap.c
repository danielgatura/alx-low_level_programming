#include "main.h"
#include <stdio.h>
/*
 *swap_int -afunction to swap two integers
 *@a: one of the integer
 *@b: the other integer
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
