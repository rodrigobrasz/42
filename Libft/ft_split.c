/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:05:40 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/08 18:02:03 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_freesplit(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free (s[i]);
		i++;
	}
	free (s);
	return (NULL);
}

static char	*ft_fill_split(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		return (ft_substr(s, 0, i));
	}
	return (NULL);
}

static size_t	ft_count_words(const char *s, int c)
{
	size_t	counter;
	size_t	i;

	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	word = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (word + 1));
	if (!result)
		return (NULL);
	while (i < word)
	{
		while (s[j] && s[j] == c)
			j++;
		result[i] = ft_fill_split(s + j, c);
		if (!result)
			return (ft_freesplit(result), NULL);
		while (s[j] && s[j] != c)
			j++;
	}
	result[i] = NULL;
	return (result);
}
