/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:10:05 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/02 12:23:07 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
	{
		return 0;
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if(i < n)
	{
		return(s1[i] - s2[i]);
	}
	else
	return 0;
}

int main()
{
	char a [] = "b";
	char b [] = "a";
	printf("%d", ft_strncmp(a, b , 1));
	return 0;
}