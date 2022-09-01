/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:49:16 by slavoie           #+#    #+#             */
/*   Updated: 2022/05/04 15:49:19 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

t_dlist	*lstnew_dbl(int content)
{
	t_dlist	*new;

	new = (t_dlist *)malloc(sizeof(*new));
	if (!new)
		return (0);
	new -> content = content;
	new -> next = new;
	new -> prev = new;
	return (new);
}
