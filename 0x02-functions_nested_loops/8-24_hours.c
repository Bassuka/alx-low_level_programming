#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 * return: no return
 */
void jack_bauer(void)
{
	int x, y, a, b;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (a = 0; a <= 5; a++)
			{
				for (b = 0; b <= 9; b++)
				{
					if (x >= 2 && y >= 4)
						break;
					_putchar(x + 48);
					_putchar(y + 48);
					_putchar(58);
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar('\n');
				}
			}
		}
	}
}
