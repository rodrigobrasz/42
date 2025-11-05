/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:35:50 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/05 17:11:11 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	//aqui eu estou alocando o na memoria o tamanho necessario para o conteudo.
	new_node = malloc(sizeof(t_list));
	if(!new_node)
		return (NULL);
	//aqui o new_node esta acessando o membro da minha struct, atribuindo o valor recebido: 
	new_node->content=content;
	//aqui inicia-se o ponteiro next como nulo, mostrando q esse no ainda nao aponta para nenhum outro.
	new_node->next=NULL;
	return (new_node);
}