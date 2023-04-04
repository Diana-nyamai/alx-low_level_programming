#include "lists.h"

/**
* listint_len - entry point
* @h: input
* Return: list length
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
