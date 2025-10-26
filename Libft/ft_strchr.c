/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:02:32 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/26 16:13:01 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char			c2;

	c2 = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c2)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c2)
		return ((char *) &s[i]);
	return (NULL);
}

/* 
int	main()
{
	char a = 'a';
	char b [10] = "Rodrigo";
	char c [10] = "Caetano";
	
	printf("Expected NULL: %s\n", strchr(b, a));
	printf("Expected not a NULL return: %s\n", strchr(c, a));
	return (0);
} */