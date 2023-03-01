#include "main.h"
#include <stdio.h>
/**
 * _strlen - program return the length of string
 * @s:the string
 * Return:the length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0'))
		length++;
	return (length);
}
