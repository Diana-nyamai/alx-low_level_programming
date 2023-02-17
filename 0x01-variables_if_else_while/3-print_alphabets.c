#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Sch = 'a';
	int Bch = 'A';
	while (Sch <= 'z' && Bch <= 'Z')
	{
		putchar(Sch);
		putchar(Bch);
		Sch++;
		Bch++;
	}
	putchar('\n');
	return (0);
}
