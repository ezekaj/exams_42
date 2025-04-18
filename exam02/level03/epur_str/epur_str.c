#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	f;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i += 1;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				f = 1;
			if (!(av[1][i] == ' ' || av[1][i] == '\t'))
			{
				if (f)
					write(1, " ", 1);
				f = 0;
				write(1, &av[1][i], 1);
			}
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
