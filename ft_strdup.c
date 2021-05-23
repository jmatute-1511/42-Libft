/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:32:12 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 20:57:12 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strdup(const char *s)
{
	unsigned long int	len;
	char				*cpy;

	len = ft_strlen(s);
	cpy = malloc(len + 1);
	if (cpy == 0)
		return (0);
	ft_memcpy(cpy, s, len);
	cpy[len] = '\0';
	return (cpy);
}
