#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s, const char *charset)
{
	int		i;
	int		j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (charset[j])
		{
			if (s[i] == charset[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);	
}

// int	main(void)
// {
// 	printf("%s\n", strpbrk("e l v i", "l"));
// 	printf("%s\n", ft_strpbrk("e l v i", "l"));
// }
