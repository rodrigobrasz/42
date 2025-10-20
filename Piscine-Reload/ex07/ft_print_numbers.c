/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:41:16 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/13 15:56:51 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
 */
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	nu;

	nu = 48;
	while (nu <= 57)
	{
		ft_putchar(nu);
		nu++;
	}
}
/* 
int main(void)
{
	ft_print_numbers();
	return 0;
} */