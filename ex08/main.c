/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahug <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:43:13 by mahug             #+#    #+#             */
/*   Updated: 2025/02/01 05:17:47 by mahug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_print_combn(int n);

int	main(int argc, char **argv)
{
	int	n;

	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (0);
	}
	n = atoi(argv[1]);
	ft_print_combn(n);
	return (0);
}
