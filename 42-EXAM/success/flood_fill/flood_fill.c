#include <stdio.h>
#include <stdlib.h>

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void	fill(char **tab, t_point size, int x, int y, char to_fill)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y || tab[y][x] != to_fill)
		return;
	tab[y][x] = 'F';
	fill(tab, size, x + 1, y, to_fill);
	fill(tab, size, x - 1, y, to_fill);
	fill(tab, size, x, y + 1, to_fill);
	fill(tab, size, x, y - 1, to_fill);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin.x, begin.y, tab[begin.y][begin.x]);
}
