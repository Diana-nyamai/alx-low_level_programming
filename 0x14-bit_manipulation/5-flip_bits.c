#include "main.h"

/**
  * flip_bits - entry point
  * @n: input
  * @m: input
  * Return: 0
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int i = n ^ m;

	while (i != 0)
	{
		if (i & 1)
			num = num + 1;
		i = i >> 1;
	}
	return (num);
}
