#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space
 *
 * @str: the string
 *
 * Return: pointer to new space
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	int j;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++;

	ptr = malloc(sizeof(*str) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		*(ptr + j) = *(str + j);

	return (ptr);
}
