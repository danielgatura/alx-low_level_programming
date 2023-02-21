#include "main.h"
/**
 * _abs -compute abosolute value of integer
 * @c: the charachter to check
 * Return: absolute value of the number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
