/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:00:51 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/03 13:03:44 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

int main(void)
{
		char l = 'a';
		char m = 'A';
	
		//TESTEMEMMOVE
		char overlap[10] = "palmeiras";
		char s[] = "abcde";
		bzero(s + 1, 2);
		
		char	a[8] = "rodrigo";
		char	b[8] = "caetano";
		
		char buffer[10] = "palmeiras";

		printf("==============================================\n");
		//ISALPHA
		printf("IsAlpha: \n");
	printf("Teste IsAlpha (expected 1) = %d\n", ft_isalpha(65));
	printf("Teste IsAlpha (expected 0)= %d\n", ft_isalpha(49));
		printf("==============================================\n");
		//ISACII
		printf("IsASCII:\n");
	printf("Teste IsASCII (expected 1)= %d\n", ft_isascii(112));
	printf("Teste IsASCII (expected 0)= %d\n", ft_isascii(129));
		printf("==============================================\n");
		//STRLEN
		printf("STRLEN: \n");
	printf("Teste strlen = %zu\n", ft_strlen("rodrigo"));
		printf("==============================================\n");
		//BZERO
		printf("BZERO:\n");
	printf("BZERO buffer test before = %s\n", buffer);
	ft_bzero(buffer, 6);
	printf("BZERO buffer test after = %s\n", buffer + 7);
		printf("==============================================\n");
		//MEMCPY
		printf("MEMCPY\n");
	printf("%s\n", (char *)ft_memcpy(a, b, 20));
		printf("==============================================\n");
		//MEMMOVE
		printf("MEMMOVE:\n");
    printf("MEMMOVE antes (sobreposição): %s\n", overlap);
    ft_memmove(overlap + 5, overlap, 5);
    printf("MEMMOVE depois (sobreposição): %s\n", overlap);
		printf("==============================================\n");
		//TOUPPER
		printf("TOUPPER :\n");
	printf("antes = %c\ndepois = %c\n", l, ft_toupper(l));
		printf("==============================================\n");
		//TOLOWER
		printf("TOLOWER:\n");
	printf("antes = %c\ndepois = %c\n", m, ft_tolower(m));
		printf("==============================================\n");
	printf("Strchr = %s\n", strchr(a, l));
	return (0);
} */