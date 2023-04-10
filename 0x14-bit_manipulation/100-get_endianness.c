#include "main.h"

/**
  * get_endianness - entry point
  * Return: 0 or 1
  */

int get_endianness(void)
{
	int a = 1;

	char *ch = (char *)&a;

	if (*ch)
		return (1);
	else
		return (0);
}
