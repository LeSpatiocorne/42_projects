/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndruon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:20:22 by ndruon            #+#    #+#             */
/*   Updated: 2024/07/23 12:20:25 by ndruon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
int     main(void)
{
        char src[] = "Hello, world!";
        char dest[50];
	// l'array doit être assez grand pour contenir le string de src

        ft_strcpy(dest, src);
        printf("Source: %s\n", src);
        printf("Destination: %s\n", dest);
        return (0);
}
*/
