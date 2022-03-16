#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table from 0
 * add_space - adds a comma and a space for numbers larger than 9
 * add_space_less10 - adds a comma and two spaces for numbers smaller than 10
 *
 * Return: 0
 */

void add_space(void)
{
	_putchar (',');
	_putchar (' ');
}

void add_space_less10(void)
{
	_putchar (',');
	_putchar (' ');
	_putchar (' ');
}

void times_table(void)
{
	int o, j, result, resultT, resultO, nextResult;
	o = j = result = resultT = resultO = nextResult = 0;

	while (o <= 9)
	{
		while (j <= 9)
		{
			result = o * j;
			nextResult = o * (j + 1);

			if (result > 9)
			{
				resultT = result / 10;
				resultO = result % 10;
				_putchar ('0' + resultT);
				_putchar ('0' + resultO);
			}

			else
			{
				_putchar ('0' + result);
			}

			j++;

			if (j < 10)
			{
				if (nextResult >= 10)
					add_space();
				else if (nextResult < 10)
					add_space_less10();
			}
		}

		o++;
		j = 0;
		_putchar ('\n');
	}
}
