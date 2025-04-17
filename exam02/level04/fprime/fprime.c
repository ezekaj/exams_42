#include <stdio.h>
#include <stdlib.h>

void	fprime(int num, int a, int i)
{
	a++;
	while (num % i != 0 && i < num)
		i++;
	if (num % i == 0)
	{
		if (a != 1)
			printf("*");
		printf("%d", i);
		if (num != i)
			fprime(num / i, a, i);
	}
	else
		printf("%d", num);
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1][0])
		fprime(atoi(av[1]), 0, 2);
	printf("\n");
	return (0);
}
