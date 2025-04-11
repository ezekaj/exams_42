#include <stdio.h>

int	ft_isspace(int	c)
{
	return((c >= 9 && c < 13) || c == 32 ? 1 : 0);
}

int	ft_isdigit(int c)
{
	return(c >= 48 && c <= 57 ? 1 : 0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	m;
	int	result;

	i = 0;
	m = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		m = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - 48;
		i++; 
	}
	return(result *= m);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi("-123"));
// }