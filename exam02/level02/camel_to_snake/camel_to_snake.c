#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 65 && av[1][i] <= 90)
			{
				write(1, "_", 1);
				av[1][i] += 32;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
}
