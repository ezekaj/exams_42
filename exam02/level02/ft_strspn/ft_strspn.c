#include <stdio.h>
#include <strings.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (s[i])
	{
		j = 0;
		c = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				c = 1;
			j++;
		}
		if (c == 0)
			return (i);
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%zu\n", strspn("4096 bytes should be enough", "0123456789"));
	printf("%zu\n", ft_strspn("4096 bytes should be enough", "0123456789"));
}
