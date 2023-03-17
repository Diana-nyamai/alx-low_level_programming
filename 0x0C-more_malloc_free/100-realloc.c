#include "main.h"
#include <stdlib.h>

/**
* _realloc - entry point
* @ptr: input
* @old_size: input
* @new_size: input
* Description: function
* Return: 0
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i;
	char *newPtr, *oldptr;

	if (new_size < old_size)
		old_size = new_size;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);
	newPtr = newptr;
	oldptr = ptr;

	for (i = 0; i < old_size; i++)
		newPtr[i] = oldptr[i];
	free(ptr);

	return (newptr);
}
