#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

int				main(int argc, char **argv)
{
	int			i;


	if (argc == 3)
	{
		i = atoi(argv[1]);
		if (i == 0)
		{
			printf("%d", atoi(argv[2]));
		}
	}
	return (0);
}
