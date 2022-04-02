#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints all digit from 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	char digits[10] = "0123456789\n";

	int i;

	for (i = 0; i < 10; i++)
		_putchar(digits[i]);
}
