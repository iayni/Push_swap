/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:48:25 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 00:46:49 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_List **b, t_List **a)
{
	t_List	*poped_node;

	if (*b == NULL)
		return ;
	poped_node = pop(b);
	push(a, poped_node->data);
	free(poped_node);
	write(1, "pa\n", 3);
}

void	pb(t_List **b, t_List **a)
{
	t_List	*poped_node;

	if (*a == NULL)
		return ;
	poped_node = pop(a);
	push(b, poped_node->data);
	free(poped_node);
	write(1, "pb\n", 3);
}
