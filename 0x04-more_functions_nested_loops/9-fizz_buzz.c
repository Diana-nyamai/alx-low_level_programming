#include <stdio.h>

/**
 * main - Entry point
 * Description: function to print fizz buzz()
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("%c%c%c%c ", 'F', 'i', 'z', 'z');
		else if (i % 5 == 0)
			printf("%c%c%c%c ", 'B', 'u', 'z', 'z');
		else
			printf("%d ", i);
	}
	return (0);
}
