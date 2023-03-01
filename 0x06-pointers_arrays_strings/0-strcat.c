#include "main.h"

/**
 * _strcat - check main
 * @dest: input
 * @src: input
 * Description: function _isalpha()
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
