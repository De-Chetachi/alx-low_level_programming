#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: Number of bytes to allocate
* Return: Returns a pointer to the allocated memory
*/

void	*malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr	=	malloc(b);

	if	(ptr == NULL)
	{
		exit(98);
	}

	return	(ptr);
}
