#include <unistd.h>

int	ft_isblank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int	ft_isvalid(int base, char c)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
	{
		if (digits[base] == c || digits2[base] == c)
			return (1);
	}
	return (0);
}

int	ft_value_of(char c)
{
	if (c >= 48 && c <= 57)
		return (c - 48);
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(char *str, int str_base)
{
	int	res;
	int	m;

	res = 0;
	m = 1;
	while (ft_isblank(*str))
		str++;
	if (*str == '-')
	{
		m = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (ft_isvalid(str_base, *str))
		res = res * str_base + ft_value_of(*str++);
	return (res * m);
}
