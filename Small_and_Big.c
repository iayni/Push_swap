/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Small_and_Big.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:09:45 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 00:36:45 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	big_instack(t_List *lst)
{
	int	tmp;

	tmp = (lst)->data;
	while (lst)
	{
		if (tmp < (lst)->data)
			tmp = (lst)->data;
		lst = (lst)->next;
	}
	return (tmp);
}

int	small_instack(t_List *lst)
{
	int	tmp;

	tmp = (lst)->data;
	while (lst)
	{
		if (tmp > (lst)->data)
			tmp = (lst)->data;
		lst = (lst)->next;
	}
	return (tmp);
}

void	ft_lstclear(t_List **lst)
{
	t_List	*aux;
	t_List	*tmp;

	if (!lst || !*lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		aux = tmp->next;
		free(tmp);
		tmp = aux;
	}
	*lst = NULL;
}
