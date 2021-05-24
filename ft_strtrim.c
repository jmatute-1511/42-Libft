/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:37:36 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/24 13:02:14 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_set_i(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = ft_strlen(set);
	b = 0;
	c = 0;
	while (c < a)
	{
		while (a > 0)
		{
			while (s1[b] == set[a])
				b++;
			a--;
		}
		if (b == 0)
			return (0);
		a = ft_strlen(set);
		b++;
		c++;
	}
	return (b);
}

size_t	ft_set_f(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = ft_strlen(set);
	b = 0;
	c = ft_strlen(s1);
	while (b < a)
	{
		while (a > 0)
		{
			while (s1[c] == set[a])
				c--;
			a--;
		}
		if (c == ft_strlen(s1))
			return (c);
		a = ft_strlen(set);
		c--;
		b++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	c;
	size_t	len;
	char	*cpy;

	a = ft_set_i(s1, set);
	c = ft_set_f(s1, set);
	len = (c - a) + 1;
	if (!s1 || !set)
		return (NULL);
	cpy = malloc(len + 2);
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, s1 + a, c);
	cpy[len + 1] = '\0';
	return (cpy);
}

int main ()
{
	char a[] = "\n \t \v hdhasgjh \n\v \t ";
	char b[] = "\n\t\v ";
	char *str= ft_strtrim(a,b);
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%i\n",str[i]);
		i++;
	}
	printf("\n%s\n",ft_strtrim(a,b));
	printf("%i\n",i);
	return (0);
}
