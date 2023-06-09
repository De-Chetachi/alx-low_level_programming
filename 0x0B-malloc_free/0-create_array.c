#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
* create_array - creates an array of chars
* and initializes it with a specific char
* @size: Length of the array
* @c: The specific char
* Return: A pointer to the array, or NULL if it fails
*/

char	*create_array(unsigned int size, char c)
{
	unsigned	int	i;
	char	*ptr;

	ptr	=	(char *)	malloc(size * sizeof(char));
	if	(ptr == NULL || size == 0)
	{
		return	(NULL);
	}
	for	(i = 0; i < size; i++)
	{
		ptr[i]	=	c;
	}
	return	(ptr);
}
