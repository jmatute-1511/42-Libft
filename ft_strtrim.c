/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:37:36 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/22 14:01:38 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	if (s1[a] != s2[a])
		b = s1[a] - s2[a];
	return (b);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int	a;
	int	b;
	int	c;

	a,b,c = 0;
	while (ft_strcmp(s1[a], set[b]) == 0)
	{
		while()
		{

		}
	}
}