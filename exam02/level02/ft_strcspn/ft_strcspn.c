#include <stdio.h>
#include <strings.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j++])
				return (i);
		}
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("%zu\n", ft_strcspn("E l v i Z e k a j", "i"));
// 	printf("%zu", strcspn("E l v i Z e k a j", "i"));
// }
