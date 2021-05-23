/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatute- <jmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 21:40:16 by jmatute-          #+#    #+#             */
/*   Updated: 2021/05/21 18:59:41 by jmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	save;
	int	sign;
	int	neg;

	count = 0;
	save = 0;
	sign = 0;
	neg = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			neg++;
		if (sign > 1)
			return (0);
		count++ && sign++;
	}
	while (str[count] >= '0' && str[count] <= '9')
		save = save * 10 + (str[count++] - 48);
	if (neg == 1)
		return (save * -1);
	return (save);
}
