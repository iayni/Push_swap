/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:46:09 by iayni             #+#    #+#             */
/*   Updated: 2022/04/20 17:46:16 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_List **sta)
{
	int	tmp;

	if (ft_lstsize(*sta) < 2)
		return ;
	if (sta == NULL || *sta == NULL)
		return ;
	if (sta == NULL || *sta == NULL)
		return ;
	tmp = (*sta)->next->data;
	(*sta)->next->data = (*sta)->data;
	(*sta)->data = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_List **stb)
{
	int	tmp;

	if (ft_lstsize(*stb) < 2)
		return ;
	if (stb == NULL || *stb == NULL)
		return ;
	tmp = (*stb)->next->data;
	(*stb)->next->data = (*stb)->data;
	(*stb)->data = tmp;
	write(1, "sb\n", 3);
}

void	ss(t_List **sta, t_List **stb)
{
	sa(sta);
	sb(stb);
}
