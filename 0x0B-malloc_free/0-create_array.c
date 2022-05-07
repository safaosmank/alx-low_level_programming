#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 *
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: NULL or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (0);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
