#include "main.h"
/**
 * _isalpha -checks alphabetical order
 * @c: the charachter  to checks
 * Return: 1 for alphabet 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);

}
