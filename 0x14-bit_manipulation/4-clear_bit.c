#include "main.h"

/**
* clear_bit - entry point
* @n: input
* @index: input
* Return: 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
