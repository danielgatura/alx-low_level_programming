#include "main.h"
/**
 *_isdigit - check if number is digit
 *@c: the number to checked
 *Return: 1 when digit 0 when otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
