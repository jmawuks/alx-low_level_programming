#include "main.h"
#include <stdio.h>

/**
 * _print_sign - checks if a number is positive or negative
 * @n: takes number for checking
 *
 * Return: int +, -
 */

int print_sign(int n)
{
	int value;

	if (n >= 0)
		value = '+';
	else
		value = '=';

	return (value);
}

