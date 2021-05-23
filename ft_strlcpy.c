/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:32:44 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:37:01 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const	char *src, size_t dstsize)
{
	unsigned int long	count;
	char				*cpy_dst;
	char				*cpy_src;

	cpy_dst = dst;
	cpy_src = (char *)src;
	count = 0;
	while (cpy_dst[count] != 0 && cpy_src[count] != 0 && count < (dstsize - 1))
	{
		cpy_dst[count] = cpy_src[count];
		count++;
	}
	cpy_dst[count] = 0;
	count = 0;
	while (cpy_src[count] != 0)
		count++;
	return (count);
}
