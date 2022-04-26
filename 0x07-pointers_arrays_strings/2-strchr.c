#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
