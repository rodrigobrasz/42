/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:17:56 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/13 20:16:55 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/* 
#include <stdio.h>

int main(void)
{
	int z;
	int x;
	
	z = 1;
	x = 2;
	ft_swap(&x, &z);
	printf("z = %d\n", z);
	printf("x = %d\n", x);
	return 0;
}*/