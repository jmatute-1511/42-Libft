/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 21:00:49 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/24 10:35:14 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	if (!s)
		return (NULL);
	cpy = malloc(len + 1);
	if (!cpy)
		return (NULL);
	ft_memmove(cpy, s + start, len);
	if (start >= ft_strlen(s))
		ft_bzero(cpy, len);
	cpy[len] = '\0';
	return (cpy);
}
