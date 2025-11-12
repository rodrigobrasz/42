/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 20:31:31 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/23 16:18:30 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("minusculo:%d\n", ft_str_is_printable("rodrigo"));
	printf("maiusculo:%d\n", ft_str_is_printable("\n"));
	printf("numero:%d\n", ft_str_is_printable("9090&*&"));
	printf("empty:%d\n", ft_str_is_printable(""));
}*/
