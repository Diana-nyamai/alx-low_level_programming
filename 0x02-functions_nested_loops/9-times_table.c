#include "main.h"

/**
 * times_table - check main
 * @void: input
 * Description: function times_table()
 * Return: nothing
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; i++)
		{
			n = i * j;
			if (n / 10 == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n/10) + '0');
				_putchar((n%/10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
