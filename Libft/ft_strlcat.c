/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:02:34 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/08 16:33:02 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			len_dest;
	size_t			len_src;
	size_t			i;
	unsigned int	res;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	i = 0;
	res = 0;
	if (size > len_dest)
		res = len_src + len_dest;
	else
		res = len_src + size;
	i = 0;
	while (src[i] && len_dest + 1 >= size)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (res);
}

/* int	main(void)
{
	char dest[] = "Avanti";
	char source[] = " Palestra!";

	printf("my func:\n");
	printf("%zu\n", ft_strlcat (dest, source, 30));
	printf("%s\n", dest);

	printf("original func:\n");
	printf("zu\n", strlcat(dest, source, 30));
	printf("zu\n", dest);
	return 0;
} */