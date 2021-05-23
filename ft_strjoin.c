/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:56:30 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/22 12:21:04 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*p;

	len = ft_strlen(s1) + ft_strlen(s2);
	p = malloc(len);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memmove(p + ft_strlen(s1), s2, len);
	p[len] = '\0';
	return (p);
}
int main()
{
	char a[] = "la locura en si";
	char b[] = "viene de la inteligecia";
	printf("%s\n",ft_strjoin(a,b));
	return (0);

}