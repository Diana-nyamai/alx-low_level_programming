#include <stdio.h>

/**
 * main - entry point
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	while(ch  <= 'z')
	{
		printf("%c",ch);
		ch++;
	}
}
