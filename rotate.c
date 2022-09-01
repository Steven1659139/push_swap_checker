/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:09:35 by slavoie           #+#    #+#             */
/*   Updated: 2022/05/03 17:11:34 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

void	rotate(t_stacks *container, char stack, int count)
{
	if (stack == 'r')
	{
		if (container->a_head)
			container->a_head = container->a_head->next;
		if (container->b_head)
			container->b_head = container->b_head->next;
		if (count == 1)
			container->nb_move += 1;
	}
	else if (stack == 'a' && container->a_head)
	{
		container->a_head = container->a_head->next;
		if (count == 1)
			container->nb_move += 1;
	}
	else if (stack == 'b' && container->b_head)
	{
		container->b_head = container->b_head->next;
		if (count == 1)
			container->nb_move += 1;
	}
}
