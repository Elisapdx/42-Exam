#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_putnbr(int nbr)
{
	if (nbr < 0)
		ft_putnbr(-nbr);
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int ft_atoi(char *str)
{
	int i = 0;
	int num = 0;
	int neg = 0;

	if (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		neg = -1;
	else
		neg = 1;
	while (str[i])
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (neg * num);
}

int main(int ac, char **av)
{
	int i = 1;
	int nb = 0;

	if (ac == 2)
	{
        	while (i < 10)
        	{
                	ft_putnbr(i);
                	ft_putstr(" x ");
             		ft_putstr(av[1]);
                	ft_putstr(" = ");
			nb = ft_atoi(av[1]) * i;
			ft_putnbr(nb);
			ft_putchar('\n');
			i++;
        	}	
	}
	else
		write(1, "\n", 1);
}
