#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (0);
	}
	n = atoi(argv[1]);
	ft_putnbr(n);
	return (0);
}
