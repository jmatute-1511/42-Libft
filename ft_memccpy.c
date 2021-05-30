/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:26:59 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/23 15:53:43 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *orig, int c, size_t n)
{
	int unsigned long	count;
	unsigned char		*cpy_dst;
	unsigned char		*cpy_orig;

	count = 0;
	cpy_orig = (unsigned char *)orig;
	cpy_dst = (unsigned char *)dst;
	while (count < n)
	{
		cpy_dst[count] = cpy_orig[count];
		if (cpy_orig[count] == (unsigned char)c)
			return (dst + (count + 1));
		count++;
	}
	return (NULL);
}
/*
int main()
{
	char a[]= "hola que tal";
	char b[] = "mira";
	char a1[]= "hola que tal";
	char b1[] = "mira";
	printf("%s\n",memccpy(a,b,'a',4));
	printf("%s\n",a);
	printf("%s\n",ft_memccpy(a1,b1,'a',4));
	printf("%s\n",a1);
	return 0;
}
*/