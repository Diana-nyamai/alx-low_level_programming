#include "main.h"

/**
* get_bit - entry point
* @n: input
* @index: input
* Return: 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n & (1UL << index)) ? 1 : 0);
}
