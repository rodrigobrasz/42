/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:28:35 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/17 12:39:18 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a;
	j = *b;
	*a = i / j;
	*b = i % j;
}
/*
int	main(void)
{
	int a = 23;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d,%d", a, b);
	return (0);
}*/
