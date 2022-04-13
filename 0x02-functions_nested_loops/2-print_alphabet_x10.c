#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
