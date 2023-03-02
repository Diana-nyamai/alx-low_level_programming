#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: an input string
 * @s2: an input string
 * Return: The difference s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, res;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i > j)
		res = 15;
	else if (i < j)
		res = -15;
	else
		res = 0;
	return (res);
}
