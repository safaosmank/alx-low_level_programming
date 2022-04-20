#include "main.h"

/**
 * _strcpy - copies string
 *
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
