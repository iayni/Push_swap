/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:32:13 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 14:20:15 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_tab_size(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (0);
	while (arr[i])
		i++;
	return (i);
}

char	**str_to_tab(char *str)
{
	char	**new;

	if (!str)
		return (NULL);
	new = (char **)malloc(sizeof(char *) * 2);
	if (!new)
		return (NULL);
	new[1] = NULL;
	new[0] = ft_strdup(str);
	if (!new[0])
	{
		free(new);
		return (NULL);
	}
	return (new);
}

char	**join_arrays(char **lhs, char **rhs)
{
	int		len_lhs;
	int		len_rhs;
	int		i;
	char	**new;

	len_lhs = get_tab_size(lhs);
	len_rhs = get_tab_size(rhs);
	new = (char **)malloc(sizeof(char *) * (len_lhs + len_rhs + 1));
	if (!new)
		return (NULL);
	new[len_rhs + len_lhs] = NULL;
	i = -1;
	while (++i < len_lhs)
		new[i] = lhs[i];
	i = -1;
	while (++i < len_rhs)
		new[i + len_lhs] = rhs[i];
	return (new);
}

char	**parsing_args(int ac, char **av)
{
	char	**tab;
	char	**tmp;
	int		index;

	index = 0;
	tab = NULL;
	while (++index < ac)
	{
		if (ft_strchr(av[index], ' ') || ft_strchr(av[index], '\t'))
		{
			tmp = ft_split(av[index], " \t");
			if (!tmp)
				return (NULL);
		}
		else
		{
			tmp = str_to_tab(av[index]);
			if (!tmp)
				return (NULL);
		}
		tab = lkmala(tab, tmp);
	}
	return (tab);
}

char	**lkmala(char **tab, char **tmp)
{
	char	**tmp2;

	if (tab == NULL)
		tab = tmp;
	else
	{
		tmp2 = join_arrays(tab, tmp);
		if (!tmp2)
			return (free_tab(tab), free_tab(tmp), NULL);
		free(tab);
		free(tmp);
		tab = tmp2;
	}
	return (tab);
}
