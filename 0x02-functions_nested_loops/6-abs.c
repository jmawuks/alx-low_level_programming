#include "main.h"
#include <stdio.h>

/**
 * _abs - finds absolute of a number
 * @r: number we try to find abs of
 *
 * Return: int +, -
 */

int _abs(int r)
{

	if (r < 0)
		r *= -1;
	else
		r *= 1;

	return (r);
}

