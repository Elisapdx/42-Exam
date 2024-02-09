#include <unistd.h>

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

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
		ft_putnbr(-nbr);
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz\n");
		else if (i % 3 == 0)
			ft_putstr("fizz\n");
		else if (i % 5 == 0)
			ft_putstr("buzz\n");
		else
		{	
			ft_putnbr(i);
			ft_putchar('\n');
		}
		i++;		
	}
}
