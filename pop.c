/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:14:34 by iayni             #+#    #+#             */
/*   Updated: 2022/04/20 17:20:26 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_List	*pop(t_List **head)
{
	t_List	*new;

	if (!head || !*head)
		return (NULL);
	new = *head;
	*head = (*head)->next;
	new->next = NULL;
	return (new);
}
