/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:12:52 by slavoie           #+#    #+#             */
/*   Updated: 2022/05/03 16:16:32 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

int	check_sort(t_stacks *cont, int nb)
{
	int	i;

	i = 1;
	if (!cont->a_head && cont->b_head)
		return (0);
	cont->temp = cont->a_head;
	while (cont->temp->next != cont->a_head)
	{
		if ((cont->temp->content > cont->temp->next->content))
			return (0);
		cont->temp = cont->temp->next;
		i++;
	}
	if (i < nb)
		return (0);
	return (1);
}

void	update_stack_b(t_stacks *container, int move)
{
	if (!move)
	{
		container->size_a -= 1;
		container->size_b += 1;
	}
	if (container->size_a == 0)
		container->a_head = NULL;
}

void	update_stack_a(t_stacks *container, int move)
{
	if (!move)
	{
		container->size_b -= 1;
		container->size_a += 1;
	}
	if (container->size_b == 0)
		container->b_head = NULL;
}

void	update_position(t_stacks *container)
{
	int		i;
	t_dlist	*ref;

	i = 1;
	ref = container->a_head;
	while (i <= container->size_a && container->a_head)
	{
		ref->position = i;
		ref = ref->next;
		i++;
	}
	ref = container->b_head;
	i = 1;
	while (i <= container->size_b && container->b_head)
	{
		ref->position = i;
		ref = ref->next;
		i++;
	}
}
