#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string
 * @accept: the other string
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	i = 0;

	while (*(s + i))
	{
		bool = 1;

		j = 0;

		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
			j++;
		}
		if (bool == 1)
			break;
		i++;
	}
	return (i);
}
