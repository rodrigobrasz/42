/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:05:40 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/07 19:10:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*fillword(cosnt char *s, char c)
{
	int	i;

	i = 0;
	while(s[i])
	{
		while (s[i] && s[i] != c)
				i++;
		return (ft_substr(s, 0, i));
	}
}
static size_t	ft_count_words(char *s, int c)
{
	size_t	counter;
	size_t	i;
	i = 0;
	counter = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			counter++;
			while(s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
}
static void		*ft_freesplit(char **s);
{
	size_t	i;

	if(!split)
		return;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split[i]);
}



char	**ft_split(char const *s, char c);