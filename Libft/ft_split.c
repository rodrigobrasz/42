/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:05:40 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/06 19:33:37 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char *s, int c);
static void		*ft_freesplit(char **s, size_t j);
static char		**ft_fill_split(char **split);

static size_t	ft_count_words(char *s, int c)
{
	//1 = o size_t e um tipo de 64 bits, ou seja ele consegue armazenar valores muito grandes; 
	size_t	counter; //conta conta o "argc";
	//o size_t e bom para essa funcao porque a quantidade de palavras pode ser 
	//relativamente grande (dependendo da entrada)
	size_t	i; // i conta o index de cada array;
	//aqui o index e usado para percorrer a string, por isso eu preciso garantir que ele nao seja
	//um numero negativo, e pelo size_t ser um tipo que armazena 
	//grandes valores, garante que nao de overflow no index

	i = 0;
	counter = 0;
	while (s[i])//inicio loop 
	{
		while (s[i] && s[i] == c)//enquanto eu estiver percorrendo essa primera string e no index 
								//e se ela for igual a delimitador avance pra proximo;
			i++;
		if (s[i] && s[i] != c)//aqui eu vou comecar a contar quantas palavras tem no array (argc)
							//caso seja ele encontre uma diferente ele entra no laco de adiciona +1 para o counter;
		{
			counter++;
			while(s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
}



char	**ft_split(char const *s, char c);