/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:56:30 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/24 10:33:53 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*p;

	if (!s2 || !s1)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memmove(p + ft_strlen(s1), s2, len);
	p[len] = '\0';
	return (p);
}
