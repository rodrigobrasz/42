/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:38:12 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/16 21:19:58 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if(nb >= 10)
    {
    ft_putchar(nb /10);
    }
    ft_putchar(nb % 10 + '0');
}

int main()
{
    int number = -42;
    ft_putnbr(number);
    return 0;
}
