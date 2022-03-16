#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - checks if a number is positive or negative
 * @n: takes number for checking
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n >= 98; n--)
		{
			printf("%d, ", n);
		}

		_putchar('\n');
	}

	else if (n <= 98)
	{
		for (n <= 98; n++)
		{
			printf("%d, ", n);
		}

		_putchar('\n');
	}
}

