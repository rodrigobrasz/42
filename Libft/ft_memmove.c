/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:02:30 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/04 17:34:16 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			counter;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	temp_src = (unsigned char *) src;
	temp_dest = (unsigned char *) dest;
	counter = 0;
	if (temp_dest > temp_src)
		while (len-- > 0)
			temp_dest[len] = temp_src[len];
	else
	{
		while (counter++ > 0)
			temp_dest[counter] = temp_src[counter];
	}
	return (dest);
}
