#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: the string thats being copied to
 * @src: the string that is being copied from
 * @n: the number of bytes from src
 *
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
