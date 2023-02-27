#include "main.h"
#include <stdio.h>
/**
 *_strlen - gives the length of string
 * @s: the string to get the length
 * return: the lenth
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
