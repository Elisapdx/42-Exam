#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *tab = NULL;
	int i = 0;
	int len = abs(end - start) + 1;

	tab = malloc(sizeof(len + 1));
	if (end > start)
	{
		while (i < len)		
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else if (start > end)
	{
                while (i < len)
                {
                        tab[i] = end;
                        end++;
                        i++;
                }
	}
	else
	{
		while (i < len)
                {
                        tab[i] = end;
			i++;
		}
	}
	return (tab);
}
