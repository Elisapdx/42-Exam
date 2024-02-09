#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int len = abs(end - start);
	int i = 0;
	int *tab = 0;

	if (start < end)
	{
		tab = malloc(sizeof(len + 1));
		while (i <= len)
		{
			tab[i] += start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		tab = malloc(sizeof(len + 1));
		while (i <=  len)
		{
			tab[i] += start;
			start--;
			i++;
		}
	}
	else
	{
		tab = malloc(sizeof(len + 1));
		while (i <= len)
		{
			tab[i] += start;
			start++;
			i++;
		}
	}
	return (tab);
}
