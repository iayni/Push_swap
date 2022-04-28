/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:43:00 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 00:45:18 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_List **sta)
{
	t_List	*tmp;
	t_List	*head;

	if (ft_lstsize(*sta) < 2)
		return ;
	tmp = pop(sta);
	head = *sta;
	while (head->next)
		head = head->next;
	head->next = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_List **stb)
{
	t_List	*tmp;
	t_List	*head;

	if (ft_lstsize(*stb) < 2)
		return ;
	tmp = pop(stb);
	head = *stb;
	while (head->next)
		head = head->next;
	head->next = tmp;
	write(1, "rb\n", 3);
}

void	rr(t_List **sta, t_List **stb)
{
	ra(sta);
	rb(stb);
}
