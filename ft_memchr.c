/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:46:31 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:36:12 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int unsigned long				count;
	unsigned char					*cpy_s;

	cpy_s = (unsigned char *)s;
	count = 0;
	while (count <= n)
	{
		if (cpy_s[count] == c)
			return (cpy_s + count);
		count++;
	}
	return (0);
}
