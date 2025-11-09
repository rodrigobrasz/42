/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:05:40 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/09 14:08:09 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_freesplit(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free (str);
	return (NULL);
}

static char	*ft_fill_split(const char *str, char delim)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != delim)
			i++;
		return (ft_substr(str, 0, i));
	}
	return (NULL);
}

static size_t	ft_count_words(const char *str, int delim)
{
	size_t	counter;
	size_t	i;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && str[i] == delim)
			i++;
		if (str[i] && str[i] != delim)
		{
			counter++;
			while (str[i] && str[i] != delim)
				i++;
		}
	}
	return (counter);
}

char	**ft_split(char const *str, char delim)
{
	char	**result;
	int		word_count;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!str)
		return (NULL);
	word_count = ft_count_words(str, delim);
	result = ft_calloc(word_count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (++i < word_count)
	{
		while (str[j] && str[j] == delim)
			j++;
		result[i] = ft_fill_split(str + j, delim);
		if (!result)
			return (ft_freesplit(result), NULL);
		while (str[j] && str[j] != delim)
			j++;
	}
	result[i] = NULL;
	return (result);
}

/* int	main(void)
{
	char	**split;
	const char	*str = "Sphynx of Black Quartz, Judge My Vow!";
	const char	*str2 = "                Sphynx of Black Quartz, Judge My Vow!";
	const char	*str3 = "of  Quartz, Judge My Vow            !               ";

	split = ft_split(str, ' ');
	split = ft_split(str2, ' ');
	split = ft_split(str3, ' ');
	(void) split;
	return (0);
} */