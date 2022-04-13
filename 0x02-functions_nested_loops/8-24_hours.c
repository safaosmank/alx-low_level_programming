#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int a;

	for (a = 48; a <= 50; a++)
	{
		int b;

		for (b = 48; b <= 57; b++)
		{
			int c;

			for (c = 48; c <= 53; c++)
			{
				int d;

				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
						break;

					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
