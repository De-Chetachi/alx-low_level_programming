#include	<stdio.h>
#include	"main.h"
#include	<unistd.h>

/**
* print_sign(int n) - priints the alphabets in small letters
* @n: The integer to be considered
* Return: 0 If the argument is zero, 1 if the argument s positive, -1 if the argument is negative
*/

int	print_sign(int	n)
{

	if	(n	>	0)
	{
		_putchar(43);
		return	(1);
	}

	else
	{
		if	(n	<	0)
		{
			_putchar(45);
			return	(-1);
		}
		else
		{
			_putchar(48);
			return	(0);
		}
	}
}
