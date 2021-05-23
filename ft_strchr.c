/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:42:58 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:36:49 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	*cpy_s;

	cpy_s = (char *)s;
	count = 0;
	while (cpy_s[count] != 0)
	{
		if (cpy_s[count] == c)
			return (cpy_s + count);
		count++;
	}
	return (0);
}
