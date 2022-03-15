#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints small letters of all alphabets
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz\n";

	int j;
	int i;
	
	for (j = 0; j < 10; i++)
	{
		for (i = 0; i < 27; i++)
			putchar(alphabets[i]);
	}
}
