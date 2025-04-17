#include <unistd.h>

int	main(int ac, char **av)
{
    int	i;
    int	start;

    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
            i++;
        while (av[1][i - 1] == 32)
            i--;
        start = i;
        while (av[1][start - 1] != 32)
            start--;
        while (start < i)
            write(1, &av[1][start++], 1);
    }
    write(1, "\n", 1);
    return (0);
}
