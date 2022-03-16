#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints small letters of all alphabets
 *
 * Return: void
 */

int _islower(int c)
{
	int value;

	if (c >= 97 && c <= 122)
		value = 1;
	else
		value = 0;

	return value;
}

