#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z')) {
			if (av[1][i] == 'a')
				ft_putchar('z');
			else if (av[1][i] == 'A')
                                ft_putchar('Z');
			if (av[1][i] == 'b')
                                ft_putchar('y');
                        else if (av[1][i] == 'B')
                                ft_putchar('Y');
			if (av[1][i] == 'c')
                                ft_putchar('x');
                        else if (av[1][i] == 'C')
                                ft_putchar('X');
                        if (av[1][i] == 'd')
                                ft_putchar('w');
                        else if (av[1][i] == 'D')
                                ft_putchar('W');
			if (av[1][i] == 'e')
                                ft_putchar('v');
                        else if (av[1][i] == 'E')
                                ft_putchar('V');
                        if (av[1][i] == 'f')
                                ft_putchar('u');
                        else if (av[1][i] == 'F')
                                ft_putchar('U');
			if (av[1][i] == 'g')
                                ft_putchar('t');
                        else if (av[1][i] == 'G')
                                ft_putchar('T');
			if (av[1][i] == 'h')
                                ft_putchar('s');
                        else if (av[1][i] == 'H')
                                ft_putchar('S');
			if (av[1][i] == 'i')
                                ft_putchar('r');
                        else if (av[1][i] == 'I')
                                ft_putchar('R');
			if (av[1][i] == 'j')
                                ft_putchar('q');
                        else if (av[1][i] == 'J')
                                ft_putchar('Q');
			if (av[1][i] == 'k')
                                ft_putchar('p');
                        else if (av[1][i] == 'K')
                                ft_putchar('P');
			if (av[1][i] == 'l')
                                ft_putchar('o');
                        else if (av[1][i] == 'L')
                                ft_putchar('O');
			if (av[1][i] == 'm')
                                ft_putchar('n');
                        else if (av[1][i] == 'M')
                                ft_putchar('N');
			if (av[1][i] == 'n')
                                ft_putchar('m');
                        else if (av[1][i] == 'N')
                                ft_putchar('M');
			if (av[1][i] == 'o')
                                ft_putchar('l');
                        else if (av[1][i] == 'O')
                                ft_putchar('L');
			if (av[1][i] == 'p')
                                ft_putchar('k');
                        else if (av[1][i] == 'P')
                                ft_putchar('K');
			if (av[1][i] == 'q')
                                ft_putchar('j');
                        else if (av[1][i] == 'Q')
                                ft_putchar('J');
			if (av[1][i] == 'r')
                                ft_putchar('i');
                        else if (av[1][i] == 'R')
                                ft_putchar('I');
			if (av[1][i] == 's')
                                ft_putchar('h');
                        else if (av[1][i] == 'S')
                                ft_putchar('H');
			if (av[1][i] == 't')
                                ft_putchar('g');
                        else if (av[1][i] == 'T')
                                ft_putchar('G');
			if (av[1][i] == 'u')
                                ft_putchar('f');
                        else if (av[1][i] == 'U')
                                ft_putchar('F');
			if (av[1][i] == 'v')
                                ft_putchar('e');
                        else if (av[1][i] == 'V')
                                ft_putchar('E');
			else if (av[1][i] == 'w')
                                ft_putchar('d');
                        else if (av[1][i] == 'W')
                                ft_putchar('D');
			else if (av[1][i] == 'x')
                                ft_putchar('c');
                        else if (av[1][i] == 'X')
                                ft_putchar('C');
			else if (av[1][i] == 'y')
                                ft_putchar('b');
                        else if (av[1][i] == 'Y')
                                ft_putchar('B');
			else if (av[1][i] == 'z')
                                ft_putchar('a');
                        else if (av[1][i] == 'Z')
                                ft_putchar('A');
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
