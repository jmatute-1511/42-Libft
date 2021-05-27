/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:49:47 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/27 11:57:35 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*save;
	int		digit;
	int		pass;
	int		cpy_n;
	int		paste;

	digit = 0;
	pass = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		(n = n * -1) && (digit += 1) && (pass += 1);
	cpy_n = n;
	while (cpy_n > 0)
		(digit += 1) && (cpy_n = cpy_n / 10);
	(save = malloc (digit + 1)) && (paste = digit - 1) && (save[digit] = '\0');
	if (!save)
		return (NULL);
	while (n > 0)
		(save[paste] = n % 10 + '0') && (paste--) && (n = n / 10);
	if (pass == 1)
		(save[paste] = '-');
	return (save);
}
