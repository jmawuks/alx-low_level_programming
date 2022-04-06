#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	int i;
	int j;
	int len1;
	int len2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	buffer = malloc((len1 + len2 + 1) * sizeof(char));

	if (buffer == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		buffer[i] = s1[i];
		i++;
	}

	while (i < (len1 + len2) && j < len2)
	{
		buffer[i] = s2[j];
		j++;
	}

	return (buffer);
}




