/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:13:39 by iayni             #+#    #+#             */
/*   Updated: 2022/04/27 23:45:11 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_List **head, int new_data)
{
	t_List	*new_node;

	new_node = (t_List *)malloc(sizeof(t_List));
	if (!new_node)
		return ;
	new_node->data = new_data;
	new_node->next = *head;
	*head = new_node;
}
