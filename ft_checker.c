/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:48:36 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 01:22:55 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(1, "Error!!\n", 8);
	exit (1);
}

void	is_duplicated(int count, int *nbr)
{
	int	i;
	int	j;

	i = 0;
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (nbr[i] == nbr[j])
				ft_error();
			j++;
		}
		i++;
	}
}

void	a_is_sorted(int *num, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (num[i] < num[i + 1])
			i++;
		else
			break ;
	}
	if (i == size - 1)
		exit(1);
}

int	*ft_checker(int ac, char **av, int *len)
{
	int		i;
	int		sz;
	int		*num;
	char	**hamzabb;

	hamzabb = parsing_args(ac, av);
	if (!hamzabb)
		exit(1);
	sz = get_tab_size(hamzabb);
	*len = sz;
	num = (int *)malloc(sizeof(int) * sz);
	if (!num)
	{
		free_tab(hamzabb);
		ft_error();
	}
	i = -1;
	while (++i < sz)
		if (ft_atoi_hamza(hamzabb[i], num + i))
			ft_error();
	is_duplicated(sz, num);
	a_is_sorted(num, sz);
	free_tab(hamzabb);
	return (num);
}
