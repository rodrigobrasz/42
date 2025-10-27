/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:02:25 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/27 11:55:50 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t	i;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while(i < n)
	{
		if(str[i] == uc)
			return (void *) &str[i];
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char j[30] = "rodrigo caetano braz da costa";
	char *res = ft_memchr(j, 'b', 30);
	printf("%s", res);
	return 0;
}