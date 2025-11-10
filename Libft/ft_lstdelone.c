/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:26:55 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/10 18:04:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

void del(void *content)
{
    free(content);
}


int main(void)
{
    t_list *node = malloc(sizeof(t_list));
    node->content = malloc(10); // só para exemplo
    node->next = NULL;

    ft_lstdelone(node, del);
    printf("Node deleted!\n");
    return 0;
}