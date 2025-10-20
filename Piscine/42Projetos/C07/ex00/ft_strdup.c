/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:11:27 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/01 11:39:00 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	temp = malloc(sizeof(char) * i + 1);
	{
		if (!temp)
			return (NULL);
	}
	i = 0;
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>

int main()
{
	char *a;
	a = "Hello World";
	printf("%s\n", ft_strdup(a));
}*/
