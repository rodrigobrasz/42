/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:33:27 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/13 17:12:17 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb -1));
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (0);
}
/* 
#include <stdio.h>

int main()
{
	printf("%d", ft_recursive_factorial(5));
} */
