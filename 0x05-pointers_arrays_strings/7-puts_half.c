#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - takes string as input
 *
 * @str: string to be taken
 */

void puts_half(char *str)
{
	int a, b = 0;

	if (_strlen(str) % 2 != 0)
	{
		b += 1;
	}
	for (a = (_strlen(str) + b) / 2; a < _strlen(str); a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
