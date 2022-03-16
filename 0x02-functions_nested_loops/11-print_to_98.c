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
	int number;

	number = n;

	if (number > 98)
	{
		for (number = n; number >= 98; number--)
		{
			printf("%d", number);

			if (number != 98)
				printf(", ");
		}

		printf("\n");
	}

	else if (number <= 98)
	{
		for (number = n; number <= 98; number++)
		{
			printf("%d", number);

			if (number != 98)
				printf(", ");
		}

		printf("\n");
	}
}

