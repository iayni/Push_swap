/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:45:37 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 00:40:38 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_List **sta)
{
	t_List	*tmp;
	t_List	*prev;
	t_List	*head;

	tmp = NULL;
	prev = NULL;
	head = *sta;
	if (ft_lstsize(head) < 1)
		return ;
	while (head->next)
	{
		prev = head;
		head = head->next;
	}
	tmp = pop(&head);
	if (!tmp)
		return ;
	prev->next = NULL;
	push(sta, tmp->data);
	free(tmp);
	write(1, "rra\n", 4);
}

void	rrb(t_List **stb)
{
	t_List	*tmp;
	t_List	*prev;
	t_List	*head;

	tmp = NULL;
	prev = NULL;
	head = *stb;
	if (ft_lstsize(head) < 1)
		return ;
	while (head->next)
	{
		prev = head;
		head = head->next;
	}
	tmp = pop(&head);
	if (!tmp)
		return ;
	prev->next = NULL;
	push(stb, tmp->data);
	free(tmp);
	write (1, "rrb\n", 4);
}

void	rrr(t_List **sta, t_List **stb)
{
	rra(sta);
	rrb(stb);
}
