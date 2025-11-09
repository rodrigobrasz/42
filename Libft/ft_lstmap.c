/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 22:38:49 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/11/09 15:45:17 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;

	if(!lst || !f | !del)
		return ;
	temp = f(lst->content);
	newlst = ft_lstnew(temp);
	if (f == NULL)
		return (lst_clear(newlst));
	while (lst)
	{
		temp = 
		lst = lst->next;
	}
}
