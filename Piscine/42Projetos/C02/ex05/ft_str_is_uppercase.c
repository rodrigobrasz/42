/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:56:28 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/19 20:31:01 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("minusculo:%d\n", ft_str_is_uppercase("rodrigo"));
	printf("maiusculo:%d\n", ft_str_is_uppercase("RODRIGO"));
	printf("numero:%d\n", ft_str_is_uppercase("9090&*&"));
	printf("empty:%d\n", ft_str_is_uppercase(""));
}*/
