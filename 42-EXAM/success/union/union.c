#include <unistd.h>

int main(int ac, char **av)
{
	int tab[255];
	int i = -1;

	if (ac == 3)
	{
		while (++i < 255)
		{
			tab[i] = 0;
		}
		i = -1;
		while (av[1][++i])
			tab[(int) av[1][i]] = 1;
		i = -1;
		while (av[2][++i])
			tab[(int) av[2][i]] = 1;
		i = -1;
		while (av[2][++i])
		{
			if (tab[(int) av[2][i]] == 1)
			{
				write(1, &av[2][i], 1);
				tab[(int) av[2][i]] = 2;
			}
		}
	}
	write(1, "\n", 1);
}
