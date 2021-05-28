/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:13:38 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/28 22:48:32 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	if (s[0] != c)
		word++;
	while (s[count])
	{
		if (s[count] == c && s[count + 1] != c && s[count + 1] != '\0')
			word++;
		count++;
	}
	if (word == 0)
		return (1);
	return (word);
}

char	*save_memory(char const *s, char c)
{
	char	*save_memory;
	int		len;
	int		cpy;

	len = 0;
	cpy = 0;
	while (s[len] && s[len] != c)
		len++;
	save_memory = (char *)malloc(sizeof(char) * (len + 1));
	if (!save_memory)
		return (NULL);
	while (s[cpy] && s[cpy] != c)
	{
		save_memory[cpy] = s[cpy];
		cpy++;
	}
	save_memory[len] = '\0';
	return (save_memory);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	int		count;
	int		count2;
	int		words;

	if (!s)
		return (NULL);
	count = 0;
	count2 = 0;
	words = ft_count_word(s, c);
	matriz = (char **)malloc(sizeof(char *) * (words + 1));
	if (!matriz)
		return (NULL);
	while (count < words)
	{
		while (s[count2] == c && s[count2])
			count2++;
		if (s[count2] != c)
			matriz[count] = save_memory(&s[count2], c);
		while (s[count2] != c && s[count2])
			count2++;
		count++;
	}
	matriz[count] = NULL;
	return (matriz);
}
/*
void	probar_split(char *str, char charset)
{
	char **tab;
	int	i;
	tab = ft_split(str, charset);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

int main(void)
{

	probar_split("   Este  es   mi  split   jeje", ' ');
	return (0);
}
*/