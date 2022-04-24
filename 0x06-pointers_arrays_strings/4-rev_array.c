#include "main.h"

/**
 * reverse_array - reverses the content of an array
 *
 * @a: the array
 * @n: the number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	int new_array;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			new_array = a[j];
			a[j] = a[j - 1];
			a[j - 1] = new_array;
		}
	}
}
