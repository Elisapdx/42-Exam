#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int num = 0;
	int neg = 1;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{	
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num *= 10;
			num += str[i] - '0';
			i++;
		}
		else
			break;
	}
	return (neg * num);
}
