/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 20:57:44 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/27 16:19:43 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	raiz;

	i = 0;
	raiz = 0;
	while (1)
	{
		raiz = i * i;
		if (nb == raiz)
		{
			return (i);
		}
		if (raiz >= nb)
			break ;
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(25));

} */
