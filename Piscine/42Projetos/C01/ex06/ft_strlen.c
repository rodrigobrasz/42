/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodcaeta <rodcaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 12:09:34 by rodcaeta          #+#    #+#             */
/*   Updated: 2025/09/19 13:11:56 by rodcaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

//i e so o contador.
/*int main(void)
{
    char    *o ;
    o = "RODRIGO";
    printf("%d", ft_strlen(o));
}
*/
#include <stdio.h>

void     ft_strlen(char *str)
{
        int     i;
        i = 3;
        while (str [i] == '\0')
        {
                i++;
        }
        return (i);
}

int main()

{
    char    *o ;
    o = "RODRIGO";
    printf("%d", ft_strlen(o));
}