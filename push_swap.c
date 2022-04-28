/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:35:01 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 14:21:20 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_for_location(int size, t_List *st)
{
	size = size / 2;
	while (size && st)
	{
		if (st->data == big_instack(st))
			return (1);
		st = (st)->next;
		size--;
	}
	return (0);
}

void	move_stacks(t_List **sta, t_List **stb, t_vars *vars)
{
	if ((*sta)->data <= vars->ar[vars->var1])
	{
		if ((*sta)->data <= vars->ar[vars->var2])
		{
			pb(stb, sta);
			rb(stb);
		}
		else
			pb(stb, sta);
	}
	else
	{
		if (vars->start)
		{
			vars->first = (*sta)->data;
			vars->start = 0;
		}
		ra(sta);
	}
}

void	smthg_big(t_List **stb, t_List **sta)
{
	t_vars	vars;

	while (ft_lstsize(*sta) != 0)
	{
		vars.first = 0;
		vars.start = 1;
		vars.ar = sort_stack(*sta);
		vars.var1 = ft_lstsize(*sta) / 3;
		vars.var2 = vars.var1 / 2;
		while (*sta && (vars.start || (*sta)->data != vars.first))
		{
			move_stacks(sta, stb, &vars);
		}
		free(vars.ar);
		if ((*sta)->next == NULL)
			break ;
	}
	while (*stb)
		smth_big3(stb, sta);
}

void	smth_big3(t_List **stb, t_List **sta)
{
	if (check_for_location(ft_lstsize(*stb), *stb) == 1)
	{
		if ((*stb)->data == big_instack(*stb))
			pa(stb, sta);
		else if ((*stb)->next->data == big_instack(*stb))
		{
			sb(stb);
			pa(stb, sta);
		}
		else
			rb(stb);
	}
	else if ((*stb)->next == NULL)
		pa(stb, sta);
	else
		rrb(stb);
}

int	main(int ac, char **av)
{
	t_List	*sta;
	t_List	*stb;
	int		*tmp;
	int		i;

	if (ac < 2)
		exit(1);
	tmp = NULL;
	sta = NULL;
	stb = NULL;
	i = 0;
	tmp = ft_checker(ac, av, &i);
	while (i-- >= 1)
		push(&sta, tmp[i]);
	free(tmp);
	if (ft_lstsize(sta) <= 3)
		ft_quicker_3(&sta);
	else if (ft_lstsize(sta) == 5)
		ft_quicker_5(&stb, &sta);
	else
		smthg_big(&stb, &sta);
	ft_lstclear(&sta);
	return (0);
}
