#include "main.h"

/**
* binary_to_uint - entry point
* @b: input
* Return: 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i, len = 0, j;

	while (b[len] != '\0')
		len++;

	j = len - 1;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1' &&  b[i] != '\0')
			return (0);
		sum += (b[i] - '0') << j;
		j--;
	}
	return (sum);
}
