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
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	if (ar == NULL || size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
