/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgobert <mgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 09:19:01 by mgobert           #+#    #+#             */
/*   Updated: 2024/09/07 16:51:12 by mgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	rush(int y, int x)
{
	int	a;
	int	z;

	a = 1;
	z = 1;
	while (a <= x)
	{
		if ((a == 1 && z == 1) || (a == x && z == 1))
			ft_putchar("A");
		else if ((a == 1 && z == y) || (a == x && z == y))
			ft_putchar("C");
		else if ((z == 1 && a > 1 && a < x) || (z == y && a > 1 && a < x)
			|| (a == 1 && z > 1 && z < y) || (a == x && z > 1 && z < y))
			ft_putchar("B");
		else
			ft_putchar(" ");
		if (z == y)
		{
			z = 1;
			a++;
			ft_putchar("\n");
		}
		else
			z++;
	}
}