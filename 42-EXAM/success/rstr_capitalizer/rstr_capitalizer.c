#include <unistd.h>
#include <stdio.h>
void ft_putstr(char *s) {
	int i = 0;
	while(s[i]){
		write(1, &s[i], 1);
		i++;
	}
}

void ft_mini(char *s) {
	int i = 0;
	while (s[i]){
		if (s[i] >= 'A' && s[i] <= 'Z')
                     s[i] += 32;
	i++;
	}
}


int main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	if (ac >= 2)
	{
		while (av[j])
		{
			ft_mini(av[j]);
			i = 0;
			while (av[j][i])
			{
				if (av[j][i] == ' '){
					if (av[j][i - 1] >= 'a' && av[j][i - 1] <= 'z')
					av[j][i - 1] -= 32;
				}
				while(av[j][i] == ' ')
					i++;
				if (av[j][i + 1] == '\0'){
				if (av[j][i] >= 'a' && av[j][i] <= 'z')
av[j][i] -= 32;
				}
				i++;
			}
			ft_putstr(av[j]);
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
}
