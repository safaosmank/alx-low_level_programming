#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or str
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (*(s1 + i))
		i++;

	j = 0;
	while (*(s2 + j))
		j++;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (*(s1 + i))
	{
		ptr[i] = s1[i];
		i++;
	}

	j = 0;
	while (*(s2 + j))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}
