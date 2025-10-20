/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:38:54 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/25 12:12:16 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sinal;
	int	i;
	int	r;

	sinal = 1;
	i = 0;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = sinal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r* 10) + (str[i] - '0');
		i++;
	}
	return (sinal * r);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_atoi("    -1234ab567"));
	return 0;
}
