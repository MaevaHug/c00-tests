#include <stdio.h>
#include <stdlib.h>

void	ft_is_negative(int n);

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (0);
	}
	n = atoi(argv[1]);
	ft_is_negative(n);
	return (0);
}
