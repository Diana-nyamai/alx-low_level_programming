#include "main.h"

/**
 * _puts - check main
 * @str: input
 * Description: function _puts
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
