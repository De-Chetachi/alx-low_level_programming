#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	"main.h"

/**
* print_to_98 - priints the last digit
* @p: The integer to be considered
* Return: No
*/

void	print_to_98(int	n)
{
	int	i;

	if	(n	<	98)
	{
		for	(i	=	n;	i	<	98;	i++)
		{
			printf("%d, ",	i);
		}
	}
	else	if	(n	==	98)
	{
		printf("%d\n",	n);
	}
	else
	{
		for	(i	=	n;	i	>	98;	i--)
		{
			printf("%d, ",	i);
		}
	}

}
