#include <unistd.h>
#include <stdio.h>

void	print_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n == 0)
		write(1, "0", 1);
	while (n)
	{
		write(1, &hex[n % 16], 1);
		n /= 16;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	minus;

	i = 0;
	minus = 1;
	while (str[i])
	{
		if (str[i] == 32 && str[i] >= 9 && str[i] <= 13)
			i++;
		else if (str[i] == '-')
			minus = -1;
		while (str[i] && (str[i] >= '0' && '9' >= str[i]))
			res = (res * 10) + str[i++] - '0';
		i++;
	}
	return (minus * res);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
