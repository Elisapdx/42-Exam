#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int num = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int is_prime(int nbr)
{
	int i = 2;

	if (nbr == 1)
		return (0);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 1;
	int nbr = 0;
	int num = 0;

	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		while (i <= num)
		{	
			if (is_prime(i))
			{
				nbr += i;
			}
			i++;				
		}
		ft_putnbr(nbr);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
