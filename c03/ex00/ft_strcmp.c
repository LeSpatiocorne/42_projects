/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:48:01 by root              #+#    #+#             */
/*   Updated: 2024/07/21 19:05:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] || s2[i])
	{
		diff = diff + (s1[i] - s2[i]);
		i++;
	}
	return (diff);
}
/*
int	main()
{
	char	str1[] = "teste";
	char	str2[] = "test";

	printf("Comparaison entre %s et %s : %d\n", str1, str2, ft_strcmp(str1, str2));
	return (0);
}
*/
