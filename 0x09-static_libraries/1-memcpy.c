#include "main.h"

/**
 * _memcpy - check main
 * @dest: input
 * @src: input
 * @n: input
 * Description: function _memcpy
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
