#include "lists.h"

/**
 * sum_listint - entry point
 * @head: input
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *headnode = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (headnode != NULL)
	{
		sum += headnode->n;
		headnode = headnode->next;
	}
	return (sum);
}
