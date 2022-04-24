#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: the first string
 * @s2: second string
 *
 * Return: 0 if strings match
 * value > 0 if s2 is less than s1
 * value < 0 if s1 less than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (diff == 0)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
