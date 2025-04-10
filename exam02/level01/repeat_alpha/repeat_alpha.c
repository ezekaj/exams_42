#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (ac != 2)
		write(1, "\n", 1);
	while (av[1][i])
	{
		if (av[1][i] >= 65 && av[1][i] <= 90)
		{
			while (k < av[1][i] - 64)
			{
				write(1, &av[1][i], 1);
				k++;
			}
			i++;
		}
		else if (av[1][i] >= 97 && av[1][i] <= 122)
		{
			k = 0;
			while (k < av[1][i] - 96)
			{
				write(1, &av[1][i], 1);
				k++;
			}
			i++;
		}
		else
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
