#include "main.h"

/**
 * _pow_recursion - returns the power
 *
 * @x: the number
 * @y: the power
 *
 * Return: the power of the number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * (_pow_recursion(x, (y - 1))));
}
