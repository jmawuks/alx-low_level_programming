#include "main.h"

/**
 * create_array - creates array of chars and initializes with a special char
 * @size: the size of array
 * @c: char to initialize array
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));

	ar[0] = c;
	return (ar);
}
