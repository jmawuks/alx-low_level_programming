#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of a whole day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int h1 = 0;
	int h2 = 0;
	int m1 = 0;
	int m2 = 0;

	while (h1 <= 2)
	{
		while (h2 <= 9)
		{
			while (m1 <= 5)
			{
				while (m2 <= 9)
				{
					if (h1 == 2 && h2 > 3)
						break;

					_putchar ('0' + h1);
					_putchar ('0' + h2);
					_putchar (':');
					_putchar ('0' + m1);
					_putchar ('0' + m2);
					_putchar ('\n');
					m2++;
				}

				m1++;
				m2 = 0;
			}

			h2++;
			m1 = 0;

		}

		h1++;
		h2 = 0;
	}
}

