/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hamza.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:59:07 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 01:52:23 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_hamza(const char *str, int *output)
{
	int		i;
	long	res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] || sign * res > INT_MAX || sign * res < INT_MIN || checkme(str))
		return (1);
	*output = (sign * res);
	return (0);
}

int	checkme(const char *str)
{
	if (str[0] == '\0')
		return (1);
	return (0);
}
