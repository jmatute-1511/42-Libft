/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:19:18 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:36:41 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int long	count;
	char				*str;
	const char			*str_src;

	str = dst;
	str_src = src;
	count = 0;
	while (count <= n)
	{
		*str++ = *str_src++;
		count++;
	}
	return (str);
}
