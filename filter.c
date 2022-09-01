/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:09:40 by slavoie           #+#    #+#             */
/*   Updated: 2022/05/05 21:11:05 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include "checker.h"

void	put_move(t_stacks *container, char *move, int count)
{
	if (ft_strncmp("info", move, 4) == 0)
		print_info();
	else if (ft_strncmp("shuffle", move, 7) == 0)
		shuffle(container);
	else if (*move != 's' && *move != 'r' && *move != 'p')
		yo_its_wrong("Error\n");
	else if (*move == 's' && ft_strlen(move) == 2)
		filter_swap(container, *(++move), count);
	else if (*move == 'p')
		filter_push(container, *(++move), count);
	else if (*move == 'r' && ft_strlen(move) == 2)
		filter_rotate(container, *(++move), count);
	else if (*move == 'r' && ft_strlen(move) == 3)
	{
		move++;
		filter_reverse_rotate(container, *(++move), count);
	}
	else
		yo_its_wrong("Error\n");
}

void	filter_push(t_stacks *container, char c, int count)
{
	if (c == 'a')
		pa(container, count);
	else if (c == 'b')
		pb(container, count);
	else
		yo_its_wrong("Erreur push.\n");
}

void	filter_swap(t_stacks *container, char c, int count)
{
	if (c == 'a')
		sa(container, count);
	else if (c == 'b')
		sb(container, count);
	else if (c == 's')
		ss(container);
	else
		yo_its_wrong("Erreur swap.\n");
}

void	filter_rotate(t_stacks *container, char c, int count)
{
	if (c == 'a')
		rotate(container, c, count);
	else if (c == 'b')
		rotate(container, c, count);
	else if (c == 'r')
		rotate(container, c, count);
	else
		yo_its_wrong("Erreur rotate.\n");
}

void	filter_reverse_rotate(t_stacks *container, char c, int count)
{
	if (c == 'a')
		reverse_rotate(container, c, count);
	else if (c == 'b')
		reverse_rotate(container, c, count);
	else if (c == 'r')
		reverse_rotate(container, c, count);
	else
		yo_its_wrong("Erreur reverse_rotate.\n");
}
