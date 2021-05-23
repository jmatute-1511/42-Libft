/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:40:15 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:36:36 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int unsigned long	count;
	int					diff;
	char				*cpy_str1;
	char				*cpy_str2;

	count = 0;
	diff = 0;
	cpy_str1 = (char *) str1;
	cpy_str2 = (char *) str2;
	while (count <= n)
	{
		if (cpy_str1[count] != cpy_str2[count])
		{
			diff = cpy_str1[count] - cpy_str2[count];
			return (diff);
		}
		count++;
	}
	return (0);
}
