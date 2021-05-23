/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:40:16 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/23 21:30:20 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int		count;
	long long			save;
	long long int		sign;
	int					neg;

	count = 0;
	save = 0;
	sign = 0;
	neg = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	while ((str[count] == '-' || str[count] == '+') && sign < 2)
	{
		if (str[count] == '-')
			neg++;
		count++ && sign++;
	}
	while (str[count] >= '0' && str[count] <= '9')
		save = save * 10 + (str[count++] - 48);
	if (neg == 1)
		return (save * -1);
	return (save);
}
