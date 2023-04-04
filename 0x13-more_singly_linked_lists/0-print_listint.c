#include "lists.h"

/**
  * print_listint - entry point function
  * @h: first node
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr;

	if (h == NULL)
	{
		printf("The list is empty");
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	printf("%d\n", ptr->n);

	return (count);
}

