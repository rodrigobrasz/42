/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:08:41 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/06 19:47:23 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb > SIZE_MAX / size)
	dest = malloc(nmemb * size);
	if(!dest)
	return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
