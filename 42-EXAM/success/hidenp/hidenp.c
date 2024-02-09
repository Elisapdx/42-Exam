#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int mot = 0;
	int len = 0;

	if (ac == 3)
	{
		len = ft_strlen(av[1]);
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					mot++;
					i++;
				}
				j++;
			}
			if (av[1][i])
				break;
		}
		if (mot == len)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
