/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:57:45 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/14 12:36:50 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	i;

	if (min >= max)
		return (NULL);
	temp = malloc(sizeof(int) * (max - min));
	if (!temp)
		return (NULL);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (temp);
}
/* 
int main(void)
{
	ft_range(0, 10);
	return 0;
}
 */