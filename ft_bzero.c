/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 09:50:51 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/22 12:33:32 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int long	null;
	char				*str;
	int					a;

	str = s;
	null = 0;
	a = 0;
	while (null <= n)
	{
		str[a] = '\0';
		a++;
	}
}
