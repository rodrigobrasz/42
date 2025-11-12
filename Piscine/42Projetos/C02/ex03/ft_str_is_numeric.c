/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 19:31:54 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/22 11:45:55 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/*
int		main(void)
{
	printf("numero:%d\n", ft_str_is_numeric("0"));
	printf("letras:%d\n", ft_str_is_numeric("Rodigo"));
	printf("caracter:%d\n", ft_str_is_numeric("$^&*()"));
	printf("empty:%d\n", ft_str_is_numeric(""));

}*/
