#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 *Return: Always 0.
 */

void print_alphabet()
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz\n";

	int i;

	for (i = 0; i < 10; i++)
		putchar(alphabets[i]);
}
