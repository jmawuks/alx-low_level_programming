#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints all digit from 0-9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char digits[9] = "01356789\n";

	int i;

	for (i = 0; i < 9; i++)
		_putchar(digits[i]);
}
