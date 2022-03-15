#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints small letters of all alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz\n";

	int i;

	for (i = 0; i < 10; i++)
		putchar(alphabets[i]);
}
