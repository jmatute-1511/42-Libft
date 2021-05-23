/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 20:14:51 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:37:14 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long int	a;
	unsigned long int	d;
	char				*cpy_haystack;
	char				*cpy_needle;

	a = 0;
	d = 0;
	cpy_haystack = (char *)haystack;
	cpy_needle = (char *)needle;
	if (cpy_needle[d] == '\0')
		return (cpy_haystack);
	while (cpy_haystack[a] && a < len)
	{
		while (cpy_haystack[a + d] == cpy_needle[d] && cpy_needle[d] && \
		cpy_haystack[a])
		{
			if (cpy_needle[d + 1] == '\0')
				return (cpy_haystack + a);
			d++;
		}
		d = 0;
		a++;
	}
	return (0);
}
