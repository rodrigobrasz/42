/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:02:35 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/03 13:09:12 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

/* 
int main() 
{
    char src[] = "rodrigo";
    char dest[3] = "rod";

    int longueur = ft_strlcpy(dest, src, sizeof(dest));

    printf("%s\n", src);
    printf("%s\n", dest);
    printf("%d\n", longueur);

    return 0;
} */