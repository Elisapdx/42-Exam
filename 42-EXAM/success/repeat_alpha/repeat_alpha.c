#include <unistd.h>

void ft_putchar_n(char c, int nb)
{
	while (nb > 0)
	{
		write(1, &c, 1);
		--nb;
	} 
}

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;

	if (ac == 2)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
					ft_putchar_n(av[i][j], av[i][j] + 1 - 'a');
				else if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					ft_putchar_n(av[i][j], av[i][j] + 1 - 'A');
				else
					write(1, &av[i][j], 1);
				j++;
			}
			i++;
		}	
	}
	write(1, "\n", 1);
}
