/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 16:24:49 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/28 17:55:19 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1;
	{
		while (j > 0)
		{
			i = 0;
			while (argv[j][i])
			{
				ft_putchar (argv[j][i]);
				i++;
			}
			ft_putchar ('\n');
			j--;
		}
	}
	return (0);
}
