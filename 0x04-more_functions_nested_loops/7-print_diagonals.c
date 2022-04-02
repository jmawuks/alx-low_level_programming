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

	space = 1;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');
		
			j = 0;

			while (j < space)
			{
				_putchar(32);
				j++;
			}
			space++;
		}
	}

	else
		_putchar('\n');
}
