/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 17:03:37 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/30 20:31:15 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	size_t	count;

	count = 0;
	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			while ((*lst)->next)
				*lst = (*lst)->next;
			if ((*lst)->next == NULL)
				(*lst)->next = new;
		}
	}
}
