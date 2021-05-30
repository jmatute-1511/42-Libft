/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:06:47 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/30 15:29:30 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	count2;
	size_t	count3;

	count = 0;
	count2 = ft_strlen(dst);
	count3 = ft_strlen(src);
	if (dstsize == 0)
		return (count3);
	if (dstsize < count2)
		return (count3 + dstsize);
	while (src[count] && (count2 + count) < (dstsize - 1))
	{
		dst[count2 + count] = src[count];
		count++;
	}
	dst[count2 + count] = '\0';
	count = count2 + count3;
	return (count);
}
/*
int main()
{
	char a[100] = "dkshohdajdhjskbdk";
	char b[100] = "hjagsg";
	char a1[100] = "dkshohdajdhjskbdk";
	char b1[100] = "hjagsg";

	printf("ORIGINAL: %zu\n",strlcat(a,b, 24));
	printf("CADENA ORIGINAL: %s\n",b);
	printf("MIA : %zu\n",ft_strlcat(a1,b1, 24));
	printf("CADENA MIA: %s\n",b1);
}
*/