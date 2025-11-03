/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:55:27 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/03 18:32:19 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*result;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	j = 0;
	while (s1[i])
	{	
		result[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		result[j] = s2[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result); 
}
/* 
int	main(void)
{
	char a[] = "rodrigo";
	char b[] = "caetano";
	printf("%s\n", ft_strjoin(a, b));
	return 0;
}
 */