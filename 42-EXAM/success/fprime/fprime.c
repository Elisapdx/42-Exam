#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int num = atoi(av[1]);

		if (num == 1)
			printf("1");
		int i = 2;
		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				num /= i;
				if (num >= i)
					printf("*");
				i = 2;
			}
			i++;
		}
	}
	printf("\n");
}
