/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 20:57:48 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/27 14:33:50 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_is_prime(int nb)

{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* 
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(-3));
}
 */