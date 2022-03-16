#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if a character is a letter
 * @c: takes ASCII value of character for checking
 *
 * Return: int 1 (true), 0 (false)
 */

int _isalpha(int c)
{
	int value;

	if (c >=65  && c <= 122)
		value = 1;
	else
		value = 0;

	return (value);
}

