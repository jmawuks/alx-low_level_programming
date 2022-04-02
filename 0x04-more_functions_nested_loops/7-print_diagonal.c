#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a backslash based on n
 * @n: number of times the backslash should print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;
	int space;

	space = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < space; j++)
			{
				_putchar(32);
			}

			_putchar(92);

			if (i < n)
				_putchar('\n');

			space++;
		}
		space = 0;
	}

	else if (n <= 0)
		_putchar(10);
}
