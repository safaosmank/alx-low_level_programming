#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int i;
	int *int_array;

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(int) * ((max - min) + 1));

	if (int_array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		int_array[i] = min;

	return (int_array);
}
