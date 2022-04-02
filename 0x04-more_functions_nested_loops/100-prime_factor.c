#include "main.h"
#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int number, count;

	number = 612852475143;

	for (count = 2; number > 1; count++)
	{
		while (number % count == 0)
		{
			number = number / count;
		}
	}

	printf("%ld ", count);
	printf("\n");

	return (0);
}
