/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:26:59 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 19:41:28 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	*ft_memccpy(void *dst, const void *orig, int c, size_t n)
{
	int unsigned long	count;
	char				*str_dst;
	const char			*str_orig;

	str_dst = dst;
	str_orig = orig;
	count = 0;
	while (str_orig[count] != c && str_orig[count] != '\0' && count <= n)
	{
		str_dst[count] = str_orig[count];
		count++;
	}
	str_dst[count] = str_orig[count];
	return (dst);
}
