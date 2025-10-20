/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 20:41:46 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/26 21:06:22 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		r;

	r = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		r = r *nb;
		power --;
	}
	return (r);
}
/* 
int	main ()
{
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(5, -3));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(5, 3));
}  */