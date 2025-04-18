#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	one;
	int	two;

	if (ac == 3)
	{
		one = atoi(av[1]);
		two = atoi(av[2]);
		if ((one && two) > 0)
		{
			while (one != two)
			{
				if (one > two)
					one = one - two;
				else
					two = two - one;
			}
			printf("%d", one);
		}
	}
	printf("\n");
	return (0);
}
