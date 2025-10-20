/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_point.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:40:33 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/10/15 14:20:56 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

char	*ft_strdup(char *src);

int main()
{
	
	alunos aluno1;
	
	aluno1.idade = 20;
	aluno1.nome = ft_strdup("Roberval Abraão Da Silva Junior");

	printf("nome = %s\n", aluno1.nome);
	printf("idade = %d", aluno1.idade);
	return 0;
}