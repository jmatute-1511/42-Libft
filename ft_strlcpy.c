/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:32:44 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/23 17:49:22 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const	char *src, size_t dstsize)
{
	unsigned int long	count;
	char				*cpy_dst;
	unsigned char		*cpy_src;

	cpy_dst = dst;
	cpy_src = (unsigned char *)src;
	count = 0;
	if (!src || !dst)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (cpy_dst[count] != 0 && cpy_src[count] != 0 && count < (dstsize - 1))
	{
		cpy_dst[count] = cpy_src[count];
		count++;
	}
	cpy_dst[count] = 0;
	return (ft_strlen(src));
}
