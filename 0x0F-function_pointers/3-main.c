#include "3-calc.h"

/**
* main - entry point
* @argc: Nomber og command line args
* @argv: Pointr to an array of cmdline args
* Return: An integer
*/

int	main(int argc, char *argv[])
{
	int	a, b, result;
	char	*s;

	s	=	argv[2];

	if	(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if	(!get_op_func(s))
	{
		printf("Error\n");
		exit(99);
	}

	a	=	atoi(argv[1]);
	b	=	atoi(argv[3]);
	result  =       (*get_op_func(s))(a, b);

	printf("%d\n", result);
	return	(0);
}
