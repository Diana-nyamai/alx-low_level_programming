#include "main.h"

/**
 * int _islower - descr
 *
 * Return: 0
 */

int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c != i)
			return 0;
	}
	return 1;
}
