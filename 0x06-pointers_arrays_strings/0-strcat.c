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
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
