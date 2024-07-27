/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:18:00 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/27 15:32:10 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"
#include <unistd.h>

void	ft_grid(char *str)
{
	int i;
	char current;

	i = 0;
	while (str[i] != '\0')
	{
		current = str[i];
		write(1, &current, 1);
		i++;
		if (i == 4 || i == 8 || i == 12 || i == 16)
			write(1, "\n", 1);
	}
	write(1, "\n", 1);
}
