/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:46:36 by iayni             #+#    #+#             */
/*   Updated: 2021/12/01 23:09:10 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	char	*p;

	p = (char *)b;
	while (len-- > 0)
	{
		*p = c;
		p++;
	}
	return (b);
}
