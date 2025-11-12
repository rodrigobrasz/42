/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:49:43 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/19 20:25:12 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("minusculo:%d\n", ft_str_is_lowercase("rodrigo"));
	printf("maiusculo:%d\n", ft_str_is_lowercase("RODRIGO"));
	printf("numero:%d\n", ft_str_is_lowercase("9090&*&"));
	printf("empty:%d\n", ft_str_is_lowercase(""));
}
*/