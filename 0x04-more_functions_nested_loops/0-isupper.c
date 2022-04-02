#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if an inputted letter is uppercase
 * @c: takes ASCII value of character for checking
 *
 * Return: int 1 (true), 0 (false)
 */

int _isupper(int c)
{
	int value;

	if (c >= 65 && c <= 90)
		value = 1;
	else
		value = 0;

	return (value);
}
