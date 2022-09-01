/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:55:22 by slavoie           #+#    #+#             */
/*   Updated: 2022/05/03 17:43:47 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include <stdio.h>



typedef struct s_stacks
{
	t_dlist	*a_head;
	t_dlist	*b_head;
	t_dlist	*temp;
	int		size_a;
	int		size_b;
	int		size_max;
	int		nb_move;
	int		*add_static;
}				t_stacks;

// Parsing
int		int_checker(long long nb);
int		twin_checker(t_dlist **lst);
int		check_input(char **input);
void	ft_lstprint(t_dlist *first);
void	convert(t_stacks *container, char *argv);
void	convert_sep(t_stacks *container, char **argv);
void	check_char(char **input, int j);
void	table_flip(char **tab);
// Fonction de double link liste

t_dlist	*lstnew_dbl(int content);
t_dlist	*lstlast(t_dlist **first, t_dlist *lst);
void	lst_addback(t_dlist **alst, t_dlist *new);
void	lstadd(t_dlist **first, t_dlist *new, t_stacks *stack);
size_t	ft_lstlen(t_dlist **first);
// move

void	rotate(t_stacks *container, char stack, int count);
void	pb(t_stacks *container, int count);
void	pa(t_stacks *container, int count);
void	sa(t_stacks *container, int count);
void	sb(t_stacks *container, int count);
void	ss(t_stacks *container);
void	reverse_rotate(t_stacks *container, char stack, int count);
void	put_move(t_stacks *container, char *move, int count);
void	filter_push(t_stacks *container, char c, int count);
void	filter_swap(t_stacks *container, char c, int count);
void	filter_reverse_rotate(t_stacks *container, char c, int count);
void	filter_rotate(t_stacks *container, char c, int count);
void	first_call_a(t_stacks *container);
void	first_call_b(t_stacks *container);
// sort

int		check_sort(t_stacks *container, int nb);
void	set_index(t_stacks *container);
// void	on_top(t_stacks *container, t_dlist *node, char stack);
// void	sort3(t_stacks *container);
// void	sort5(t_stacks *container);
// void	universal_sort(t_stacks *container);
// void	algo(t_stacks *container);
// int		size_chunk(t_stacks *container);
// int		check_chunk(int max, int min, t_stacks *container);
// void	replace(t_stacks *container);
// void	ah_shit_here_we_go_again(t_stacks *cont);

// find
// t_dlist	*find_min(t_stacks *list, char stack);
// t_dlist	*find_max(t_stacks *list, char stack);
// t_dlist	*find_node(t_stacks *list, int min, int max, char stack);
// t_dlist	*find_node_bottom(t_stacks *list, int min, int max, char stack);

// update
void	update_stack_b(t_stacks *container, int move);
void	update_stack_a(t_stacks *container, int move);
void	update_position(t_stacks *container);

//get

// int		get_top(t_dlist *stack);
// int		get_max(t_stacks *container, char stack);
// int		get_min(t_stacks *container, char stack);
// t_dlist	*I_can_get_node(t_stacks *container, int min);

#endif
