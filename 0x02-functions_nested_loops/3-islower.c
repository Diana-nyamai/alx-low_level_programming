#include "main.h"

/**
 * int _islower - descr
 *
 * Return: 0
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			lower = 1;
	}
	return (lower);
}
