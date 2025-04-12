#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*ns;

	i = 0;
	len = 0;
	ns = NULL;
	while (str[len])
		len++;
	ns = malloc(sizeof(str) * len + 1);
	if (!ns)
		return (NULL);
	while (str[i])
	{
		ns[i] = str[i];
		i++;
	}
	ns[i] = 0;
	return (ns);
}

// int	main(void)
// {
// 	printf("%s\n", strdup("Elvi"));
// 	printf("%s\n", ft_strdup("Elvi"));
// }
