/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:00:51 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/21 14:11:38 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char a [] = "rodrigo";
	char b [] = "caetano";

	printf ("Teste ATOI = %d\n", ft_atoi("42"));
	printf("Teste IsAlpha (expected 1) = %d\n", ft_isalpha(65));
	printf("Teste IsAlpha (expected 0)= %d\n", ft_isalpha(49));
	printf("Teste IsASCII (expected 1)= %d\n", ft_isascii(112));
	printf("Teste IsASCII (expected 0)= %d\n", ft_isascii(129));
 	printf("Teste strlen (counter string) = %zu\n", ft_strlen("rodrigo"));	
	printf("Teste strncmp (Compare N strings)= %d\n", ft_strncmp(a, b, 7));
	
	/*
	printf("%d\n", );
	printf("%d\n", );
	printf("%d\n", ); */
}