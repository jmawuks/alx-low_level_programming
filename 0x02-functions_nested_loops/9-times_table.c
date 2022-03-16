#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table from 0
 *
 * Return: 0
 */

int main(void)
{
	times_table();
	return (0);
}

void times_table(void)
{
	int o = 0;
	int j = 0;
	int result = 0;
	int resultT = 0;
	int resultO = 0;

	while (o <= 9)
	{
		while (j <= 9)
		{
			result = o * j;

			if (result > 9)
			{
				resultT = result / 10;
				resultO = result % 10;
				_putchar ('0' + resultT);
				_putchar ('0' + resultO);
			}

			else
				_putchar ('0' + result);
		
			if (j < 9)
			{	
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}

			j++;
		}

		o++;
		j = 0;
		_putchar ('\n');
	}
}
