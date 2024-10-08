/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:48:51 by nidruon           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/09/22 18:20:54 by nidruon          ###   ########.fr       */
=======
/*   Updated: 2024/09/22 18:23:03 by nidruon          ###   ########.fr       */
>>>>>>> 0bf635fbf1744911ef7609ef3ec26035f05a590a
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft.h"

char	*ft_getnb(int fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		exit(1);
	i = 0;
	read(fd, c, 1);
	while (c[0] == '\n')
		read(fd, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_getval(int fd, char *c, t_list *dict)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		ft_error(2, dict);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_list	*process(char *file)
{
	long	i;
	int		fd;
	char	c[1];
	t_list	*tab;
	char	*tmp;

	fd = open(file, O_RDONLY);
	tab = malloc(sizeof(t_list) * 43);
	if (fd == -1 || !(tab))
		ft_error(1, 0);
	i = -1;
	while (i++, (i < 41))
	{
		tab[i].nb = ft_getnb(fd);
		read(fd, c, 1);
		while (c[0] == ' ' || c[0] == ':')
			read(fd, c, 1);
		tmp = ft_getval(fd, c, tab);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
	}
	close(fd);
	return (tab);
}

void	free_dict(t_list *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(dict[i].nb);
		free(dict[i].val);
		i++;
	}
	free(dict);
}
