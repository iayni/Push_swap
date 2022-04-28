/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Quick.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:12:33 by iayni             #+#    #+#             */
/*   Updated: 2022/04/27 22:50:34 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_quicker_3(t_List **sta)
{
	while (*sta)
	{
		if (ft_lstsize(*sta) == 2)
		{
			if ((*sta)->data > (*sta)->next->data)
				sa(sta);
			break ;
		}
		if (ft_lstsize(*sta) == 3)
		{
			if ((*sta)->data > (*sta)->next->next->data)
				ra(sta);
			else if ((*sta)->data > (*sta)->next->data)
				sa(sta);
			else if ((*sta)->next->data > (*sta)->next->next->data)
				rra(sta);
			else
				break ;
		}
	}
}

void	ft_quicker_5(t_List **stb, t_List **sta)
{
	while (*sta)
	{
		if (ft_lstsize(*stb) == 2)
			break ;
		if ((*sta)->data == small_instack(*sta))
			pb(stb, sta);
		else
			ra(sta);
	}
	while (ft_lstsize(*sta) == 3)
	{
		if ((*sta)->data > (*sta)->next->next->data)
			ra(sta);
		else if ((*sta)->data > (*sta)->next->data)
			sa(sta);
		else if ((*sta)->next->data > (*sta)->next->next->data)
			rra(sta);
		else
			break ;
	}
	while (*stb)
		pa(stb, sta);
}

void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

int	*sort_stack(t_List *lst)
{
	int	i;
	int	size;
	int	*ar;

	i = 0;
	size = ft_lstsize(lst);
	ar = malloc(sizeof(int) * size);
	if (!ar)
		return (0);
	while (lst != NULL)
	{
		ar[i++] = (lst)->data;
		lst = (lst)->next;
	}
	i = 0;
	while (i < size - 1)
	{
		if (ar[i] > ar[i + 1])
		{
			ft_swap(&ar[i], &ar[i + 1]);
			i = 0;
		}
		i++;
	}
	return (ar);
}

void	free_tab(char **tab)
{
	int	i;

	if (tab)
	{
		i = -1;
		while (tab[++i])
			free(tab[i]);
		free(tab);
	}
}
