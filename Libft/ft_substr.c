/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:57:03 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/10 15:11:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	slen;
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	else if (start + len > slen)
		len = slen - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main(void)
{	
	char	a[] = "AVANTE PALESTRA";

	printf("%s\n", ft_substr(a, 7, 20));
	return 0;
}
s = [A] [V] [A] [N] [T] [E] [] [P] [A] [L] [E] [S] [T] [R] [A] [\0]; = 16
start = 7;
len = 20;

20 + 7 = 27;

len = 16 - 7;
len = 9;*/