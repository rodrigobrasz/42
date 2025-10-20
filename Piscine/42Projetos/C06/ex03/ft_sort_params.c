/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 18:12:23 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/29 10:58:43 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_sort_params(char **str, int size)
{
	int		i;
	int		j;
	char	*temp;

	if (size <= 2)
		return ;
	i = 1;
	while (i < size -1)
	{
		j = 1;
		while (j < size - i)
		{
			if (ft_strcmp (str[j], str[j + 1]) > 0)
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argv, argc);
	while (i < argc)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
