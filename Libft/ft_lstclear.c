/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:26:59 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/09 14:47:35 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !*lst || !del)
		return ;
	ft_lstclear(&(*lst)->next, del);
	del(*lst);
	free (lst);
}

/* int	recursive_add(int num, int goal)
{
    if (num == goal)
		return (num);
 	return (recursive_add(num + 1, goal));
}

int main(void)
{
	int	objective;
	objective = recursive_add(3, 9);
	objective = objective;
} */