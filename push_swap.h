/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iayni <iayni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:48:10 by iayni             #+#    #+#             */
/*   Updated: 2022/04/28 01:48:17 by iayni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct List
{
	int			data;
	struct List	*next;
}t_List;

typedef struct s_vars
{
	int	var1;
	int	var2;
	int	*ar;
	int	first;
	int	start;
}t_vars;
int		checkme(const char *str);
char	**lkmala(char **tab, char **tmp);
char	**join_arrays(char **lhs, char **rhs);
char	**str_to_tab(char *str);
int		get_tab_size(char **arr);
void	free_tab(char **tab);
char	**parsing_args(int ac, char **av);
int		ft_atoi_hamza(const char *str, int *output);
int		*ft_checker(int ac, char **av, int *len);
int		ft_lstsize(t_List *lst);
int		small_instack(t_List *lst);
int		big_instack(t_List *lst);
t_List	*pop(t_List **head);
void	ft_quicker_5(t_List **stb, t_List **sta);
void	ft_quicker_3(t_List **sta);
void	push(t_List **head, int new_data);
void	pb(t_List **a, t_List **b);
void	pa(t_List **a, t_List **b);
void	rrr(t_List **sta, t_List **stb);
void	ss(t_List **sta, t_List **stb);
void	rr(t_List **sta, t_List **stb);
void	rra(t_List **sta);
void	rrb(t_List **stb);
void	sa(t_List **sta);
void	sb(t_List **stb);
void	ra(t_List **sta);
void	rb(t_List **stb);
void	smth_big3(t_List **stb, t_List **sta);
int		*sort_stack(t_List *lst);
void	ft_swap(int *a, int *b);
void	ft_lstclear(t_List **lst);
char	**parsing_args(int ac, char **av);
#endif