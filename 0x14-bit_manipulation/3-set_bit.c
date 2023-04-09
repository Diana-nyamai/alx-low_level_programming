#include "main.h"

/**
* set_bit - entry point
* @n: input
* @index: input
* Return: 0
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	*n |= 1UL << index;
	return (1);
}
