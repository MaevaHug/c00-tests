/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahug <mahug@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:41:39 by mahug             #+#    #+#             */
/*   Updated: 2025/01/29 21:41:41 by mahug            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	c;

	if (argc != 2 || strlen(argv[1]) != 1)
	{
		printf("Usage: %s <c>\n", argv[0]);
		return (0);
	}
	c = argv[1][0];
	ft_putchar(c);
	return (0);
}
