#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 26; i > -1; i--)
		putchar(lower[i]);

	putchar('\n');

	return (0);
}
