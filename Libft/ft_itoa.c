/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:50:45 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/04 17:32:56 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countnbr(int nb);

char	*ft_itoa(int nb)
{
	char	*res;
	int		len;
	long	num;

	num = nb;
	len = ft_countnbr(num);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (num == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		res[--len] = num % 10 + '0';
		num = num / 10;
	}
	return (res);
}

static size_t	ft_countnbr(int nb)
{
	size_t	count;
	long	nbr;

	nbr = nb;
	count = 0;
	if (nb <= 0)
	{
		count ++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

/* 
int main(void)
{
	printf("%s\n", ft_itoa(-20));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(20));
	return (0);
} */