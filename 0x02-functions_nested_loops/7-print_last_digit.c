#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of a number
 * @r: number we find the last digit of
 *
 * Return: int, value (last digit)
 */

int print_last_digit(int r)
{
	int value;
	value = r % 10;

	return (value);
}

