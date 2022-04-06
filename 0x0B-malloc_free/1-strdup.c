#include "main.h"

/**
 * _strdup - returns a copy of a string
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *buffer;
	int i;
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	buffer = malloc(count * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < count)
	{
		buffer[i] = str[i];
		i++;
	}
	return (buffer);
}
