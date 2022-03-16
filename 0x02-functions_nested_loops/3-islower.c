#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character, c is upper or lower case
 * @c: takes ASCII value of character for checking
 *
 * Return: int 1 (true), 0 (false)
 */

int _islower(int c)
{
	int value;

	if (c >= 97 && c <= 122)
		value = 1;
	else
		value = 0;

	return (value);
}

