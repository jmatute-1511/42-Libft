/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:06:47 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:36:57 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int long	count;
	char				*cpy_dst;
	char				*cpy_src;
	int					count2;
	int					sum;

	cpy_dst = dst;
	cpy_src = (char *)src;
	count = 0;
	count2 = ft_strlen(dst);
	sum = ft_strlen(dst) + ft_strlen(src);
	while (cpy_src[count] != 0 && count2 < (dstsize - 1))
	{
		cpy_dst[count2] = cpy_src[count];
		count++;
		count2++;
	}
	return (sum);
}
