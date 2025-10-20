/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:48:26 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/13 15:56:55 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
 */
void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
		ft_putchar('N');
}
/*
int main()
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-1);
	return 0;
} */