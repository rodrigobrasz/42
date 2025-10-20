/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:27:16 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/13 15:56:41 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/* 
#include <stdio.h>

int main(void)
{
	int a = 12;
	int b = 5;
	int c;
	int d;
	ft_div_mod(a, b, &c, &d);
	printf("%d %d", c, d);
	return 0;
} */