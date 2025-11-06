/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:02:40 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/03 13:05:07 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c2;
	char	*res;

	res = NULL;
	c2 = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c2)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == c2)
	{
		res = (char *) &s[i];
	}
	return (res);
}
/* 
int main ()
{
	char a[] = "rodirigo";
	char b = 'i';
	printf("%s", ft_strrchr(a, b));
	return 0;
} */