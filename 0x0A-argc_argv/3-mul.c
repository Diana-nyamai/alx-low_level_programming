#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* @argc: input
* @argv: input
* Description: function
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 1, mul = 1;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		retur (1);
	}

	return (0);
}
