#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints all numbers from 0 to 14, 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	char digits[21] = "01234567891011121314\n";

	int i;
	int j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 21; j++)
			_putchar(digits[j]);
}
