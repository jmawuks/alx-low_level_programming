#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints small letters of all alphabets ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz\n";

	int j;
	int i;
	
	j = 0;

	while (j < 10)
	{
		for (i = 0; i < 27; i++)
			putchar(alphabets[i]);

		j++;
	}
}
