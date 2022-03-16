#include "main.h"
#include <stdio.h>

/**
 * print_sign - checks if a number is positive or negative
 * @n: takes number for checking
 *
 * Return: int +, -
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}

	else if (n == 0)
	{
		_putchar(0);
		value = 0
	}

	else
	{
		_putchar('-');
		value = -1;
	}
	return (value);
}

