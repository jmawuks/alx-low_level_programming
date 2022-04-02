#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return : void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
			_putchar(' ');
		for (k = 0; k < i + 1; k++)
			_putchar('#');
		_putchar('\n');
	}
}
