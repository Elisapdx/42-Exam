#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int i = 0;
	char *dup;
	int len = ft_strlen(src);

	dup = malloc(sizeof(len + 1));
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
