#include <stdlib.h>

char	*ft_itoa(int num)
{
	char	*str;
	char	*t;
	char	*u;

	if (!(str = (char *)malloc(16)))
		return (NULL);
	t = str;
	(num < 0 ? *t++ = '-' : 1);
	if (num > 0)
		num = -num;
	if (num <= -10)
	{
		u = ft_itoa(-(num / 10));
		while (*u)
			*t++ = *u++;
	}
	*t = '0' - num % 10;
	*(t + 1) = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(77));
}
