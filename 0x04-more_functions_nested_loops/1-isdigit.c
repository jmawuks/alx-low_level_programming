#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if an inputted character is a digit
 * @c: takes ASCII value of character for checking
 *
 * Return: int 1 (true), 0 (false)
 */

int _isupper(int c)
{
	int value;

	if (c >= 48 && c <= 57)
		value = 1;
	else
		value = 0;

	return (value);
}
