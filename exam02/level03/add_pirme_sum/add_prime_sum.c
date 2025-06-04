#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	ft_isprime(int nbr)
{
	int	i;

	i = 2;
	if (nbr < 2)
		return (0);
	while (i <= nbr / 2)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	m;
	int	nbr;

	i = 0;
	m = 1;
	nbr = 0;
	if (!str[i])
		return (0);
	if (str[0] == '-')
		str[0] = write(1, "-", 1);
	if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] >= '0' && str[i] <= 9)
		nbr = (nbr * 10) + (str[i++] + '0');
	return (nbr);
}

int	main(int ac, char **av)
{
	int	nbr;
	int	sum;

	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		sum = 0;
		while (nbr > 0)
		{
			if (ft_isprime(nbr))
					sum += nbr;
			nbr--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
