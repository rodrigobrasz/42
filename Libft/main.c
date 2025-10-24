/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:00:51 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/24 15:51:54 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char s[] = "abcde";
    bzero(s + 1, 2);
	char *r = strchr("palmeiras",'l');
	char l;
	l = 'a';
	char m;
	m = 'A';
	char	a[8] = "rodrigo";
	char	b[8] = "caetano";
	char buffer[10] = "palmeiras";
	char src[] = "Palmeiras";
	char dest[50];

	printf("Teste IsAlpha (expected 1) = %d\n", ft_isalpha(65));
	printf("Teste IsAlpha (expected 0)= %d\n", ft_isalpha(49));
		printf("---------------------\n");
	printf("Teste IsASCII (expected 1)= %d\n", ft_isascii(112));
	printf("Teste IsASCII (expected 0)= %d\n", ft_isascii(129));
 		printf("---------------------\n");
		printf("STRLEN:\n");
	printf("Teste strlen = %zu\n", ft_strlen("rodrigo"));
		printf("---------------------\n");
		printf("STRNCMP: \n");
	printf("Libft = %d\n", ft_strncmp(a, b, 7));
	printf("Man Strncmp = %d\n", strncmp(a, b, 7));
		printf("---------------------\n");
		printf("BZERO:\n");
/* 	ft_memset(b, '*', 7);
	printf("%s\n", b); */
	printf("BZERO buffer test before = %s\n", buffer);
	ft_bzero(buffer, 6);
	printf("BZERO buffer test after = %s\n", buffer + 7);
	printf("%s\n", s);
		printf("---------------------\n");
		printf("MEMSET:\n");
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	printf("MEMSET source :%s\n", src);
 	printf("MEMSET destnation :%s\n", dest);
		printf("---------------------\n");
		printf("MEMMOVE:\n");
    char overlap[] = "palmeiras";
    printf("MEMMOVE antes (sobreposição): %s\n", overlap);
    ft_memmove(overlap + 5, overlap, 5);
    printf("MEMMOVE depois (sobreposição): %s\n", overlap);
		printf("---------------------\n");
		printf("TOUPPER :\n");
	printf("antes = %c\ndepois = %c\n", l, ft_toupper(l));
		printf("---------------------\n");
		printf("TOULOWER:\n");
	printf("antes = %c\ndepois = %c\n", m, ft_tolower(m));
		printf("---------------------\n");
		printf("STRCHR: \n");
		printf("Libft=%s\n", strchr(src, l));
	printf("%s\n", r);
/*	printf("%d\n", );
	printf("%d\n", );
	printf("%d\n", );
	printf("%d\n", );
	printf("%d\n", );
*/
}